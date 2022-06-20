#include <iostream>
#include "functions.hpp"
#include "file_helper.hpp"

void runMakeFile()
{
	if (files::checkFileExists("Makefile")) system("make");
	else
	{
		std::cout << "Error: No makefile present!\n" << std::endl;
		funcs::printHelp(1);
	}
}

int main(int argc, char **argv)
{
	// Im unsure if I am going to keep this in future releases. I find that
	// It brings the readability of the codebase much lower.
	using std::cout;
	using std::endl;
	using std::string;
	using funcs::parseMakefileValue; // functions.hpp
	using files::makeFile;           // file_helper.hpp

	// Check if Makefile exists; if it does, run it; if not print help
	if (argc == 1) runMakeFile();

	// If command is run with an argument check for which argument and run
	// corresponding code. Additionally if invalid flag is detected run
	// help message with exit code of 1
	if (argc == 2)
	{
		switch(argv[1][1])
		{
			// Print help menu
			case 'h':
				funcs::printHelp(0);

				// Configure new Makefile
			case 'c':
				// TODO: Implement
				cout << "Not implemented!" << endl;
				break;

				// Run Makefile in current directory and execute file
			case 'e':
				// runMakeFile();
				string exec_name = parseMakefileValue("build");
				exec_name += parseMakefileValue("name");
				//#if defined(_WIN32)
				//	exec_name += ".exe"
				cout << exec_name << endl;
				break;
		}
	}

	return 0;
}
