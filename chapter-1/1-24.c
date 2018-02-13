/* Write a program to check a C program for rudimentary syntax errors 
 * like unbalanced parentheses, brackets and braces. 
 * Don't forget about quotes, both single and double, escape sequences, 
 * and comments. (This program is hard if you do it in full generality.)
 */
 
 /*
  * Implement state machine for this project.
  * (), [], {}, "", ''
  * recursive funcs (for diff types?)
  */
  
  
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

int getlines(char line[]);

int main(void) {
int  i, len;
char line[MAXLINE];
 
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