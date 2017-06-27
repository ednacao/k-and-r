#include <stdio.h>

#define IN  1	/* inside a word  */
#define OUT 2   /* outside a word */

/* write a program that prints its input one word per line */

int main(void)
{
	int c, previous_state, state;

	state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;

			if (previous_state == IN)
			{
				putchar('\n');
			}
		}
		else if (state == OUT)
		{
			putchar(c);
			state = IN;
		}
		else
		{
			putchar(c);
		}

		previous_state = state;
	}

	return 0;
}

