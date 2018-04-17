/* 
 * Write the function htoi(s), which converts a string of hexadecimal
 * digits (including an optional Ox or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a through f, and A through F.
 */

#include <stdio.h>

/* htoi: converts hexadecimal digits to integer */
int htoi(char s[]) {
	int i, n, num1, num2;

	if ((s[0] == '0')  && ((s[1] == 'x') || (s[1]) == 'X')) {
		n = 2;
	} else {
		n = 0;
	}
	/* printf("value of n is: %d\n", n); */

	for (i = n; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f'); ++i)
		if (s[i] >= '0' && s[i] <= '9') {
			num1 = (s[i] - '0');
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			num2 = (s[i] - 'a' + 10);
			}
		/* printf("num1: %d, num2: %d\n", num1, num2); */	
	return num1 + num2 * 16;
}

int main(void) {

	int i;

	i = htoi("0xb8");

	printf("%d is the integer value\n", i);

	return 0;
}

