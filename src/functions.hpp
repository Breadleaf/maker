#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "cpp_py.hpp"

namespace funcs
{
	void printHelp(int error_code)
	{
		using std::cout;
		using std::endl;
		cout << "Usage: maker [OPTION]\n";
		cout << "Configure or run a Makefile in the current directory.";
		cout << "\n\nmaker -h -> Display help screen\n";
		cout << "maker -c -> Configure Makefile\n";
		cout << "maker -e -> Run Makefile and execute\n";
		cout << "maker    -> Run Makefile";
		cout << endl;
		exit(error_code);
	}

	std::string parseMakefileValue(std::string variable)
	{
		using cpp_py::split;
		std::ifstream file("Makefile");
		std::string value, tmp;

		while (getline(file, tmp))
		{
			std::vector<std::string> vec_str = split(tmp, ' ');
			if (vec_str[0] == variable && vec_str[1] == "=")
				value = vec_str[2];
		}

		return value;
	}
}

#endif // FUNCTIONS_HPP
