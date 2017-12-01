/* write a program to print all input lines that are longer than 80 characters */
   
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
  int  len;              /* current line length        */
  char line[MAXLINE];    /* current input line         */
  char longboy[MAXLINE]; /* line > 80 chars saved here */
  
  while ((len = getlines(line, MAXLINE)) > 0)
  {
    if (len > 80)
    {
      copy(longboy, line);
      printf("\n\nLength: %d\nLine: %s\n", len-1, longboy);
    }

  return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim)
{
  int c, i;
  
  for (i = 0; i < lim-1 && (c = getchar()) !=EOF && c!='\n'; ++i)
   s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;
  
  i = 0;
  while ((to[i] = from[i]) != '\0')
  ++i;
}
