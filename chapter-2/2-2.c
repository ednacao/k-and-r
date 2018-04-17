/* 
 * Write a loop equivalent to the for loop above without using && or || 
 *
 * for (i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; ++i)
 *	s[i] = c;
 */

#include <stdio.h>

int c, i = 0, lim = 10;
char s[10];

int main (void) {
	while ((c = getchar()) != EOF)
		if (c != '\n')
			if (i < lim-1) {
				s[i] = c;
				++i;
			}

	printf("%s\n", s);

return 0;
}

