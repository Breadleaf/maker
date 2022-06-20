#ifndef FILE_HELPER_HPP
#define FILE_HELPER_HPP

#include <fstream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>

namespace files
{
	bool checkFileExists(std::string path)
	{
		std::ifstream file(path);
		return ((file.fail()) ? false : true );
	}

	// Makes a directory; should be cross platform...
	// Code credit: https://stackoverflow.com/a/35109823/18411475
	void makeDir(std::string name)
	{
		mode_t permission = 0755;
		#if defined(_WIN32)
			mkdir(name.c_str());
		#else
			mkdir(name.c_str(), permission);
		#endif
	}

	void makeFile(std::string name)
	{
		std::ofstream file(name);
	}
}

#endif // FILE_HELPER_HPP
