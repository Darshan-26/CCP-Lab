/* WAP to convert temperature from degree fahrenheit to degree celsius*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
   	printf("\n Enter temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - 32) * 5 / 9;

	printf("\n %.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

	return 0;
}
