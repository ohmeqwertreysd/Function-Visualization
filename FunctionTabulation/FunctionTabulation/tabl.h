//tabl.h
//Заголовочный файл табулирования - содержит объявление класса

#pragma once
#ifndef TABL_H
#define TABL_H

namespace tabulation
{
	class Tabl
	{
	private:
		std::string _func;
		double _a;
		double _b;
		double _dx;
		double f(const std::string) const;
	public:
		Tabl(const std::string&);
		Tabl(const std::string&, const double, const double, const double);
		~Tabl();
		void tabulation() const;
	};
}

#endif // !TABL_H