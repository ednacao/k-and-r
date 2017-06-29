/* print Fahrenheit-Celsius table using for loop, decrementing from 300 */

#include <stdio.h>

int main(void)
{
	int fahr;

	printf("Fahrenheit\tCelsius\n");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

	return 0;
}
