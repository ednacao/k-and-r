/* write a function reverse(s) that reverses the character
string s. use it to write a program that reverses its
input a line at a time */

#include <stdio.h>

#define MAXLINE 1000

int getlines(char line[]);
int main(void)
{
  int len, i;
  char line[MAXLINE];
  
  while((len = getlines(line)) > 0)
  {
    for(i = len - 2; i >= 0; --i)
    {
      printf("%c", line[i]);
    }
    printf("\n");
  }
  
  return 0;
  
}

int getlines(char s[])
{
  int c, i;
  
  for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if(c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
