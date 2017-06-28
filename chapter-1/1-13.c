#include <stdio.h>

/* write a program to print a histogram of the lengths of words in its input */

int main(void)
{
	int c;
	
	while ((c = getchar()) !=EOF)
	{
		if (c == ' ' || c == '\t' || c== '\n')
			printf("\n");
		else
			printf("-");
	}

	return 0;
}
