#include <iostream>
#include "help_menu.hpp"

int main(int argc, char **argv)
{
	if (argc == 1) help::printHelp();
	return 0;
}
