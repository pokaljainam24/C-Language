// Q.1 Temperature Converter
// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F = (9/5 × °C) + 32


#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in degrees Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    printf(" %.2f degrees Celsius is equal to \n %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
}