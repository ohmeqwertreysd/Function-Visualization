//file.h
//Заголовочный файл для чтения и записи в файл - содержит объявление класса
#pragma once
#ifndef FILE_H
#define FILE_H

namespace filestream
{

	class Read
	{
	private:
		std::ifstream _file;
		std::string _func;
	public:
		Read();
		std::string getRead() const; // вернуть функцию
		~Read();
	};

	class Write
	{
	private:
		std::ofstream _file;
	public:
		Write(const std::string&);
		void write(const double&, const double&); // запись результатов табулирования
		~Write();
	};
}

#endif // !FILE_H


