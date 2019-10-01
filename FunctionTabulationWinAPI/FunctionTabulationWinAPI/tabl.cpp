//tabl.cpp
//Содержит определения данных и методов для класса табулирования

#include <string>
#include <utility>
#include <vector>
#include "tabl.h"
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

	Tabl::Tabl(const std::string& func, const double a, const double b, const double dx) : _func(func), _a(a), _b(b), _dx(dx) {	}

	Tabl::~Tabl() 
	{
		_func.clear();
		_XY.clear();
	}

	void Tabl::tabulation()
	{
		for (auto x = _a; x <= _b; x += _dx)
		{
			std::string functmp = replaceString(_func, "x", std::to_string(x));
			_XY.push_back(std::make_pair(x, f(functmp))); // Добавление в вектор пар X и Y
		}
	}

	double Tabl::f(const std::string func) const
	{
		mathparser::MathParser* parser = new mathparser::MathParser(func.c_str());
		auto answer = parser->parser();
		delete parser;

		return answer;
	}

	std::vector<std::pair<double, double>> Tabl::getXY() const
	{
		return _XY;
	}
}