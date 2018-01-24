/* write a program to remove trailing blanks and tabs
   from each line of input, and to delete entirely blank lines */
   
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
     if (c == '\n')
     {
       if (prevline == 0)
       {
         line[i] = c;
         prevline = 1;
         ++i;
       }
     }
     else if (c == ' ' || c == '\t')
     {
       if (prevblank == 0 && prevline == 0)
       {
         line[i] = c;
         prevblank = 1;
         ++i;
       }
     }
     else
     {
       line[i] = c;
       prevblank = 0;
       prevline = 0;
       ++i;
     }
   }
   printf("%s", line);

   return 0;
 }
