/* write a program to count blanks, tabs, and newlines */

#include <stdio.h>

int main(void)
{
	int c, nl, t, b;

	nl = 0;
	t  = 0;
	b  = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		if (c == '\t')
			++t;
		if (c == ' ')
			++b;
	}
	printf("%d new line count\n", nl);
	printf("%d tab count\n", t);
	printf("%d blanks count\n", b);

	return 0;
}
