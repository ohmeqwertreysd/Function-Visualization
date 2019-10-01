//mathparser.cpp
//�������� ����������� ������ � ������� ��� ������ ������� �������������� ���������

#include <string>
#include <stdexcept>
#include "expression.h"
#include "mathparser.h"

namespace mathparser
{
	MathParser::MathParser(const char* carrage)
		:_carrage(carrage) {	}

	MathParser::~MathParser() {	}

	inline void MathParser::moveToken(const int n)
	{
		if (*_carrage != '\0')
			std::advance(_carrage, n);
	}

	double MathParser::parser()
	{
		return BinaryExpression(0); // ������ ������������ � ����������� 0
	}

	std::string MathParser::parseToken()
	{
		if (std::isdigit(*_carrage)) // �����
		{
			std::string num;
			while (std::isdigit(*_carrage) || *_carrage == '.')
			{
				num.push_back(*_carrage);
				moveToken(1);
			}
			return num;
		}
		else if (std::isalpha(*_carrage) || std::ispunct(*_carrage)) // �������� � �������
		{
			const std::string operations[] = { "(",")", "+","-","/","*","^","sin","cos","sqrt","tan","abs","ln" };

			for (auto n : operations)
				if (!strncmp(_carrage, n.c_str(), n.size()))
				{
					if (n != ")")
						moveToken(n.size());
					return n;
				}
		}

		if (*_carrage != '\0')
			throw std::logic_error("Unexpected expression."); // �������������� ���������

		return ""; // ����� �������
	}

	double MathParser::SimpleExpression()
	{
		// ��������� �����/������
		std::string token = parseToken();

		// ���� �����
		if (std::isdigit(token.front()))
			return std::stod(token);

		//  ���� ������
		if (token == "(")
		{
			double expressionInBrackets = parser(); // �� ������ ��������� � ��� ��������

			if (*_carrage == ')')
			{
				moveToken(1);
				if (*_carrage == '(' || std::isdigit(*_carrage) || std::isalpha(*_carrage)) // ���� ����� ����������� ��� ��������� - ������
					throw std::logic_error("Expected operator");
				return expressionInBrackets;
			}
			else throw std::logic_error("Expected ')'"); // ���� ��� ����������� ������
		}

		// ����� ��� ������� ��������, ���� ��� ��� ��������
		if (*_carrage != '(' && std::isalpha(token.front())) // ���� ����� �������� ���������(����� + � -) ��� ����������� ������ - ��� ������
			throw std::logic_error("Expected '('");

		expression::Expression* unary = new expression::UnaryExpression(token, new expression::Term(SimpleExpression()));
		double result = unary->calculation(); 	// ��������� �� ��������
		delete unary;

		return result;
	}

	double MathParser::BinaryExpression(int prevPriority)
	{
		// ���������� ������ ��������
		double left = SimpleExpression();

		for (;;)
		{
			std::string op = parseToken(); // ����� ���������

			if (op == ")" || op == "") // ���� �������� ) ��� ����� �������, �� ������ ������� left
				return left;
			else if (op == "(") // ����������� ��������
				throw std::logic_error("Missing operator before '('.");

			int currentPriority = getPriority(op.front());

			if (currentPriority <= prevPriority) // ���� ����� ��������� ������, ��� �����������, �� ������� ��������
			{
				int size = op.size();
				moveToken(-size);
				return left;
			}

			// ���������� ������� ��������
			double right = BinaryExpression(currentPriority);

			expression::Expression* binary = new expression::BinaryExpression(new expression::Term(left), op, new expression::Term(right));
			left = binary->calculation(); // ��������� �������� ���������
			delete binary;
		}
	}

	int MathParser::getPriority(const char& op) const
	{
		switch (op)
		{
		case '+': case '-':
			return 1;
		case '*': case '/':
			return 2;
		case '^':
			return 3;
		}
		return 0;
	}
}