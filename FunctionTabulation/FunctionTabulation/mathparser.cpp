//mathparser.cpp
//Содержит определения данных и методов для класса парсера математических выражений

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
		return BinaryExpression(0); // начать парсирование с приоритетом 0
	}

	std::string MathParser::parseToken()
	{
		if (std::isdigit(*_carrage)) // число
		{
			std::string num;
			while (std::isdigit(*_carrage) || *_carrage == '.')
			{
				num.push_back(*_carrage);
				moveToken(1);
			}
			return num;
		}
		else if (std::isalpha(*_carrage) || std::ispunct(*_carrage)) // операции и функции
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
			throw std::logic_error("Unexpected expression."); // непредвиденное выражение

		return ""; // конец функции
	}

	double MathParser::SimpleExpression()
	{
		// извлекает число/символ
		std::string token = parseToken();

		// если число
		if (std::isdigit(token.front()))
			return std::stod(token);

		//  если скобка
		if (token == "(")
		{
			double expressionInBrackets = parser(); // то начать вычислять в ней значение

			if (*_carrage == ')')
			{
				moveToken(1);
				if (*_carrage == '(' || std::isdigit(*_carrage) || std::isalpha(*_carrage)) // если между выражениями нет оператора - ошибка
					throw std::logic_error("Expected operator");
				return expressionInBrackets;
			}
			else throw std::logic_error("Expected ')'"); // если нет закрывающей скобки
		}

		// иначе это унарная операция, ищем для нее значение
		if (*_carrage != '(' && std::isalpha(token.front())) // если после унарного оператора(кроме + и -) нет открывающей скобки - это ошибка
			throw std::logic_error("Expected '('");

		expression::Expression* unary = new expression::UnaryExpression(token, new expression::Term(SimpleExpression()));
		double result = unary->calculation(); 	// посчитать ее значение
		delete unary;

		return result;
	}

	double MathParser::BinaryExpression(int prevPriority)
	{
		// вычисление левого значения
		double left = SimpleExpression();

		for (;;)
		{
			std::string op = parseToken(); // поиск оператора

			if (op == ")" || op == "") // если оператор ) или конец функции, то просто вернуть left
				return left;
			else if (op == "(") // отсутствует оператор
				throw std::logic_error("Missing operator before '('.");

			int currentPriority = getPriority(op.front());

			if (currentPriority <= prevPriority) // если новый приоритет меньше, чем минимальный, то вернуть значение
			{
				int size = op.size();
				moveToken(-size);
				return left;
			}

			// вычисление правого значения
			double right = BinaryExpression(currentPriority);

			expression::Expression* binary = new expression::BinaryExpression(new expression::Term(left), op, new expression::Term(right));
			left = binary->calculation(); // посчитать бинарное выражение
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