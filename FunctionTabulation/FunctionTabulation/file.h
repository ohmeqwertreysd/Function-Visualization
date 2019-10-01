//file.h
//������������ ���� ��� ������ � ������ � ���� - �������� ���������� ������
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
		std::string getRead() const; // ������� �������
		~Read();
	};

	class Write
	{
	private:
		std::ofstream _file;
	public:
		Write(const std::string&);
		void write(const double&, const double&); // ������ ����������� �������������
		~Write();
	};
}

#endif // !FILE_H


