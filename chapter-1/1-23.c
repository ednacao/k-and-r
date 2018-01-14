/* Write a program to remove all comments from a C program.
 * Don't forget to handle quoted strings and character
 * constants properly. C comments do not nest. 
 */

#include <stdio.h>

int main(void)
{
  int c, lastchar, state;
  
  lastchar  = state  = 0;
  
/* 
 * state 0: not inside a comment or string
 * state 1: possibly beginning of a comment
 * state 2: inside of a comment
 * state 4: possibly exiting a comment
 * state 5: end of comment
 * state 6: inside of a string
 * state 7: possible end of string / escape sequence
 * state 8: possible end of string / escape sequence
 * state 10: reached end of string
 */

  while ((c = getchar()) !=EOF) 
  {      
      if (state == 0) {
        if (c == '/')         {
            lastchar = c;
            state = 1;
        } else if (c == '"')  {
            state = 6;
        } else {
            state = 0;
        }
        
      
      } else if (state == 1)  {
        if (c == '*') {
            state = 2;
        } else {
            state = 0;
        }
        
      } else if (state == 2)  {
        if (c == '*') {
            state = 4;
        } else {
            state = 2;
        }
        
      } else if (state == 4)  {
        if (c == '/') {
            state = 5;
        } else {
            state = 2;
        }
      } else if (state == 5) {
        if (c == '/') {
          state = 1;
        } else {
          state = 0;
        }
        
      } else if (state == 6)  {
        if (c == '"') {
            state = 10;
        } else if (c == '\\') {
            state = 7;
        } else {
            state = 6;
        }
        
      } else if (state == 7)  {
        if (c == '"') {
            state = 7;
        } else if (c == '\\') {
            state = 8;
        } else {
            state = 6;
        }
        
      } else if (state == 8)  {
        if (c == '"') {
            state = 10;
        }
      } else if (state == 10) {
        if (c == '\\') {
            state = 1;
        } else {
            state = 0;
        }
      }
      
      if (state == 0 && lastchar == '/') {
        printf("%c", c);
      }    

  }
  
  return 0;
}
