//mathparser.h
//������������ ���� ������� �������������� ��������� - �������� ���������� ������

#pragma once
#ifndef MATHPARSER_H
#define MATHPARSER_H

namespace mathparser
{
	class MathParser
	{
	private:
		const char* _carrage;
	protected:
		inline void moveToken(const int); // ������������ ������� �� ������
		std::string parseToken(); // ���������� �����/������� �� ������
		double SimpleExpression(); // ������� ������� ��������� 
		double BinaryExpression(int); // ������� ������� ���������
		int getPriority(const char& op) const; // ��������� ��������
	public:
		explicit MathParser(const char*);
		~MathParser();
		double parser(); // ����� ��� ������� ������������
	};
}

#endif // !MATHPARSER_H
