#include <iostream>
#include "help_menu.hpp"
#include "file_helper.hpp"

int main(int argc, char **argv)
{
	// Im unsure if I am going to keep this in future releases. I find that
	// It brings the readability of the codebase much lower.
	using std::cout;
	using std::endl;
	using help::printHelp;        // help_menu.hpp
	using files::makeFile;        // file_helper.hpp
	using files::checkFileExists; // file_helper.hpp

	// Check if Makefile exists; if it does, run it; if not print help
	if (argc == 1)
	{
		if (checkFileExists("Makefile")) system("make");
		else
		{
			cout << "Error: No makefile present!\n" << endl;
			printHelp(0);
		}
	}


	// If command is run with an argument check for which argument and run
	// corresponding code. Additionally if invalid flag is detected run
	// help message with exit code of 1
	if (argc == 2)
	{
		switch(argv[1][1])
		{
			// Print help menu
			case 'h':
				printHelp(0);

			// Configure new Makefile
			case 'c':
				// TODO: Implement
				cout << "Not implemented!" << endl;
				break;

			// Run Makefile in current directory and execute file
			case 'e':
				// TODO: Implement
				cout << "Not implemented!" << endl;
				break;
		}
	}

	return 0;
}
