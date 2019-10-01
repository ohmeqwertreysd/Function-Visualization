//file.cpp
//—одержит определени€ данных и методов дл€ класса FStream

#include <fstream>
#include <string>
#include <algorithm>
#include "file.h"

namespace filestream
{
	// Read
	Read::Read()
	{
		_file.open("tabl.txt");
		if (_file.is_open())
			getline(_file, _func);

	}

	Read::~Read()
	{
		_file.close();
	}

	std::string Read::getRead() const
	{
		return _func;
	}

	// Write
	Write::Write(const std::string& func)
	{
		_file.open("tabl.txt", std::ios::app);
		_file << "y(x)=" << func << std::endl;
		_file << "The result of the calculation." << std::endl;
	}

	Write::~Write()
	{
		_file.close();
	}

	void Write::write(const double& i, const double& text)
	{
		_file << "y(" << i << ")\t" << text << std::endl;
	}
}