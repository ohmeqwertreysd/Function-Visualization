//main.cpp
//Содержит главную функцию

#include <iostream>

void start();

int main()
{
	try
	{
		start();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	system("pause");
	return 0;
}
