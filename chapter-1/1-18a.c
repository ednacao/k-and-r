/* write a program to remove trailing blanks and tabs
   from each line of input, and to delete entirely blank lines 
*/
   
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

int main(void)
{
int c, i, prevblank, prevline;
char line[MAXLINE];

i = 0;
prevblank = 0;
prevline  = 0;

while ((c = getchar()) != EOF)
{
  if (prevblank == 0 && prevline == 0)
  {
    if (c == ' ' || c == '\t')
    {
      line[i] = c;
      ++i;
      prevblank = 1;
    }
    else if (c != ' ')
    {
      line[i] = c;
      ++i;
      prevblank = 0;
    }
  }
  else if (prevblank == 1)
  {
    if (c == ' ' || c == '\t')
    {
      prevblank = 1;
    }
    else if (c != ' ' || c != '\t')
    {
      line[i] = c;
      ++i;
      prevblank = 0;
    }
  }
}
printf("%s", line);

return 0;

}
