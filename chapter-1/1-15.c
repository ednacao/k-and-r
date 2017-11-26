/* eewrite the temperature conversion program to use a function for conversion */

#include <stdio.h>

int main(void)
{
    int i;
    int conversion(int);
    
    printf("Celsius\tFahrenheit\n");

    for (i = 0; i < 15; i++)
    {
        int celsius = i * 20;

        printf("%d\t%d\n", celsius, conversion(celsius));
    }

    return 0;
}

int conversion(int c)
{
    return (c * 9) / 5 + 32;
}
