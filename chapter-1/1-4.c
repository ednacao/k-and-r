/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version with header */

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int   lower, upper, step;

	lower =   0;  /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step  =  20;  /* step size */

	celsius = lower;

	printf("Celsius\tFahrenheit\n");
	
	while (celsius <= upper) {
		fahr = (celsius * 9) / 5 + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
