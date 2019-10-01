//mathparser.h
//Заголовочный файл парсера математических выражений - содержит объявление класса

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
		inline void moveToken(const int); // передвижение каретки по строке
		std::string parseToken(); // извлечение числа/символа из строки
		double SimpleExpression(); // считает простое выражение 
		double BinaryExpression(int); // считает сложное выражение
		int getPriority(const char& op) const; // приоритет операций
	public:
		explicit MathParser(const char*);
		~MathParser();
		double parser(); // метод для запуска парсирования
	};
}

#endif // !MATHPARSER_H
