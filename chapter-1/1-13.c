/* write a program to print a histogram of the lengths of words in its input */

#include <stdio.h>

int main(void)
{
    int c, i, j, tempLength;
    
    int wordLengths[10]; /* array wordLengths containing elements 0-9 */
    tempLength = 0;
    
    for (i = 0; i < 10; ++i)
        wordLengths[i] = 0; /* initializes array and sets elements with value 0 */
    while ((c = getchar()) !=EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            {
                ++wordLengths[tempLength];
                tempLength = 0;
            }
        else
            {
                ++tempLength;
            }
    }
    
    printf("\nWord Lengths\n");
    for (i = 0; i < 10; ++i)
    {
      printf("%d: ", i);
      for (j = 0; j < wordLengths[i]; ++j)
      {
        printf("*");
      }
    printf("\n");
    }
    
    return 0;
}
