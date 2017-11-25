/* write a program to print a histogram of the frequencies of different characters in its input */

#include <stdio.h>

#define FIRST_PRINTABLE_CHAR 32
#define LAST_PRINTABLE_CHAR 126
#define PRINTABLE_CHARS      95

int main(void)
{
        int c, i, j;
        int characterCounts[PRINTABLE_CHARS];
      
        for (i = 0; i < PRINTABLE_CHARS; ++i)
                characterCounts[i] = 0;

        while ((c = getchar()) !=EOF)
        {
          if (c >= FIRST_PRINTABLE_CHAR && c <= LAST_PRINTABLE_CHAR)
          {
            ++characterCounts[(c - FIRST_PRINTABLE_CHAR)];
          }
        }

        printf("\nCharacter Counts\n");
        for (i = 0; i < PRINTABLE_CHARS; ++i)
        {
          printf("%c  |  ", (i + FIRST_PRINTABLE_CHAR));
          for (j = 0; j < characterCounts[i]; ++j)
          {
            printf("*");
          }
        printf("\n");
        }

	return 0;
}
