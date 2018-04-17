/* 
 * Write a program to determine the ranges of char, short, int, and long
 * variables, both signed and unsigned, by printing appropriate values
 * from standard headers and by direct computation. Harder if you 
 * compute them: determine the ranges of the various floating-point types.
 */
 
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(void) {
	 
	/* direct computation */
 	/* char */
  	char c, prev;
  	c = prev = 0;
  
  	while (c >= prev) {
		prev = c;
    	++c;
	}
	printf ("Minimum CHAR is %d\n", c);
  	printf ("Maximum CHAR is %d\n", prev);

	/* int */
	int cint, prevint;
	cint = 0;
	prevint = 0;
  
	while (cint >= prevint) {
		prevint = cint;
		++cint;
	}
	printf ("Minimum INT is %d\n", cint);
	printf ("Maximum INT is %d\n", prevint);
  
	/* float */
	/* results in undefined behavior due to wrapping*/
	float c, prev;
	c = 0;
	prev = 0;
  
	while (c >= prev) {
		prev = c;
		++c;
	}
	printf ("Minimum FLOAT is %f\n", c);
	printf ("Maximum FLOAT is %f\n", prev);

	/* from limits.h */
	/* char */
	printf("Maximum value of char:            %d\n", CHAR_MAX);
	printf("Minimum value of char (CHAR_MIN): %d\n", CHAR_MIN);
	printf("Maximum value of signed char:     %d\n", SCHAR_MAX);
	printf("Minimum value of signed char:     %d\n", SCHAR_MIN);
	printf("Maximum value of unsigned char:   %u\n", UCHAR_MAX);

	/* short */
	printf("Maximum value of signed short:    %d\n", SHRT_MAX); printf("Minimum value of signed short:    %d\n", SHRT_MIN);
	printf("Maximum value of unsigned short:  %u\n", USHRT_MAX);
  
	/* int */
	printf("Maximum value of signed int:      %d\n", INT_MAX);
	printf("Minimum value of signed int:      %d\n", INT_MIN);  
	printf("Maximum value of unsigned int:    %u\n", UINT_MAX);
  
	/* long */
	printf("Maximum value of signed long:     %ld\n", LONG_MAX);  
	printf("Minimum value of signed long:     %ld\n", LONG_MIN); 
	printf("Maximum value of unsigned long:   %lu\n", ULONG_MAX);
  
	/* float */
	printf("Maximum floating point number:        %f\n", FLT_MAX);
	printf("Minimum floating point number:        %f\n", FLT_MIN);
	printf("Maximum double floating point number: %f\n", DBL_MAX);
	printf("Minimum double floating point number: %f\n", DBL_MIN);
  
   
	/* two's complement formulas */
	/* signed:
	 * 	MIN = -1 * 2^(N-1)
	 * 	MAX = 2^(N-1) - 1
     *
	 * unsigned:
	 * 	MIN = 0
	 *	MAX = 2^N - 1
	 */
   	printf("for MAX UNSIGNED UCHAR (2^8-1): %f\n", (pow(2, 8)-1));
   
  
	return 0;
 
}

