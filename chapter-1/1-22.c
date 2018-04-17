/*
 * Write a program to "fold" long input lines into two or more shorter lines 
 * after the last non-blank character that occurs before the n-th column 
 * of input. Make sure your program does something intelligent with very long 
 * lines, and if there are no blanks or tabs before the specified column.
 */
 
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

int getlines(char line[]);

int main(void) {
 
 int  i, j, foldlength, lastspace, len;
 char line[MAXLINE];
 
 foldlength = 20;
 j = 0;
 
 while ((len = getlines(line)) > 0) {
   for (i = 0; i < len; ++i) {
     if (line[i] == ' ') {
       lastspace = i;
     }
     if (j == foldlength) {
       line[lastspace] = '\n';
       j = 0;
     }
     ++j;
   }
   printf("%s\n", line);

}
 return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[]) {
 int c, i;
 
 for (i = 0; i < MAXLINE - 1 && (c = getchar()) !=EOF && c!='\n'; ++i)
  s[i] = c;
 if (c == '\n') {
   s[i] = c;
   ++i;
 }
 s[i] = '\0';
 return i;
}
