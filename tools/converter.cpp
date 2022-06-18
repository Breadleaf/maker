// This program was created to convert a plain text file into a string
#include <iostream>

int main()
{
	int c = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			printf("\\t");
			continue;
		}

		if (c == '\n')
		{
			printf("\\n");
			continue;
		}

		putchar(c);
	}

	return 0;
}
