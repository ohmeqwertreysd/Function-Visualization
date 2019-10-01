//tabl.cpp
//Содержит определения данных и методов для класса табулирования

#include <string>
#include <iostream>
#include <fstream>
#include "tabl.h"
#include "file.h"
#include "mathparser.h"

namespace tabulation
{
	// функция для замены 'x' на нужную переменную
	std::string replaceString(std::string subject, const std::string& search, const std::string& replace)
	{
		size_t pos = 0;
		while ((pos = subject.find(search, pos)) != std::string::npos)
		{
			subject.replace(pos, search.length(), replace);
			pos += replace.length();
		}
		return subject;
	}

	Tabl::Tabl(const std::string& func) : _func(func), _a(0.0), _b(0.0), _dx(0.0)
	{
		std::cout << "Enter the data : interval [a;b] and step dx." << std::endl;
		std::cout << "a: "; std::cin >> _a;
		std::cout << "b: "; std::cin >> _b;
		std::cout << "dx: "; std::cin >> _dx;
	}

	Tabl::Tabl(const std::string& func, const double a, const double b, const double dx) : _func(func), _a(a), _b(b), _dx(dx) {	}

	Tabl::~Tabl() {	}

	void Tabl::tabulation() const
	{
		std::cout << "The result of the calculation." << std::endl;
		filestream::Write* write = new filestream::Write(_func);

		for (auto x = _a; x <= _b; x += _dx)
		{
			std::string functmp = replaceString(_func, "x", std::to_string(x));
			double y = f(functmp);
			std::cout << "y(" << x << ") = " << y << std::endl;
			write->write(x, y);
		}

		delete write;
	}

	double Tabl::f(const std::string func) const
	{
		mathparser::MathParser* parser = new mathparser::MathParser(func.c_str());
		auto answer = parser->parser();
		delete parser;

		return answer;
	}
}