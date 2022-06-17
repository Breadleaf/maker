#ifndef HELP_MENU_HPP
#define HELP_MENU_HPP

#include <iostream>

namespace help
{
	void printHelp()
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
	}
}

#endif // HELP_MENU_HPP
