#include <stdio.h>

/* write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */

int main(void)
{
	int c, prevblank;

	prevblank = 0;

	while ((c = getchar()) != EOF)
	{	
		if (c == ' ')
		{
			if (prevblank == 0)
			{
				putchar(c);
				prevblank = 1;
			}
		}
		if (c != ' ')
		{
			putchar(c);
			prevblank = 0;
		}
	}

	return 0;
}
