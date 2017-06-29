/* verify that getchar() !=EOF is 0 or 1 */

#include <stdio.h>

int main(void)
{
	int c;
	char value;

	value = ((c = getchar()) != EOF);

	printf("\n%d\n", value);

	return 0;
}
