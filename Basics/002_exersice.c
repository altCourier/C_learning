#include <stdio.h>

int main()
{
	double cels;
	
	printf("Enter temperature in Celsius: ");
	scanf("%lf", &cels);
	
	printf("The temperature in Fahrenheit is %.2lf.", 32 + (cels*9/5));
	
	return 0;
}