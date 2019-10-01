//start.cpp
//������� �������

#include <iostream>
#include <algorithm>
#include <fstream>
#include "tabl.h"
#include "file.h"

void start()
{
	filestream::Read* read = new filestream::Read;
	std::string func = read->getRead();
	delete read;

	if (func.empty()) // ���� �� ����� �� ������� �������� �������
	{
		std::cout << "Input function: "; // ������� ������ ������������
		std::cin >> func;
	}
	else
	{
		std::cout << "The function is taken from the file." << std::endl;
		std::cout << "y(x)=" << func << std::endl;
		std::cout << "Continue with this function? (y/n)" << std::endl;

		char ch = '\0';
		while (ch != 'y' && ch != 'n')
		{
			std::cout << "> ";
			std::cin >> ch;
			switch (ch)
			{
			case 'y':
				std::cout << "Ok." << std::endl;
				break;
			case 'n':
				std::cout << "Input function: ";
				std::cin >> func;
				break;
			default:
				std::cout << "Invalid character entered. Try again." << std::endl;
				break;
			}
		}
	}

	func.erase(std::remove(func.begin(), func.end(), ' '), func.end()); // ������� �� ��������

	tabulation::Tabl* tabl = new tabulation::Tabl(func);
	tabl->tabulation(); // ������ ������������� 
	delete tabl;
}