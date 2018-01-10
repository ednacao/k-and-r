/* Write a program detab that replaces tabs in the input with the proper number
 of blanks to space to the next tab stop. Assume a fixed set of tab stops, 
 say every n columns. Should n be a variable or a symbolic parameter? */
 
 #include <stdio.h>
 
 int main(void)
 {
   
   int c, i, linelength, spaces;
   
   linelength = 0;
   spaces     = 0;
   
   while ((c = getchar()) != EOF)
   {
     if (c == '\t')
     {
       spaces = 8 - (linelength % 8);
       
       for (i = 0; i < spaces; ++i)
        putchar('o');
        
       linelength = linelength + spaces;
     }
     else
     {
       putchar(c);
       
       if (c == '\n')
       {
         linelength = 0;
       }
       else
       {
         ++linelength;
       }
     }
   }
   
   return 0;
 }
