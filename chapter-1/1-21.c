/* 
 * Write a program entab that replaces strings of blanks 
 * with the minimum number of tabs and blanks 
 * to achieve the same spacing. Use the same stops as for detab. 
 * When either a tab or a single blank would suffice 
 * to reach a tab stop, which should be given preference?
 */
 
 #include <stdio.h>
 
 int main(void) {
   
   int c, count, i, linelength, spacesuntiltab;
   
   count = linelength = spacesuntiltab = 0;
   
   while ((c = getchar()) != EOF) {
     if (c == ' ') {
       
       spacesuntiltab = 8 - (linelength % 8);
       ++count;
       
       while ((c = getchar()) != EOF && c == ' ') {   
         ++count;
       }
       
       /* increment line length by number of spaces plus final non-space character */
       linelength += count + 1;
       
       /* only output pre-tab spaces if total count is greater than spacesuntiltab */
       if (count > spacesuntiltab) {
         for (i = 0; i < spacesuntiltab; ++i)
             putchar('-');
         count -= spacesuntiltab;
       }       

       /* output tabs */
       for (i = 0; i < count / 8; ++i)
           putchar('\t');
       for (i = 0; i < count % 8; ++i)
           putchar('o');

       putchar(c);
       count = 0;
     } else {
       putchar(c);
       ++linelength;
     }
  }
   return 0;
 }
