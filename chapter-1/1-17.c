/* write a program to print all input lines that are longer than 80 characters */
   
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

int getlines(char line[]);

int main(void)
{
  int  len;              /* current line length        */
  char line[MAXLINE];    /* current input line         */
  
  while ((len = getlines(line)) > 0)
  {
    if (len > 80)
    {
      printf("\n\nLength: %d\nLine: %s\n", len-1, line);
    }
  }

  return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[])
{
  int c, i;
  
  for (i = 0; i < MAXLINE - 1 && (c = getchar()) !=EOF && c!='\n'; ++i)
   s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
