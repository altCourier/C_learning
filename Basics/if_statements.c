#include <stdio.h>

int main() 
{
	double x, y;
	printf("Enter a number: \n");
	scanf("%lf", &x);
	
	printf("Enter another number: \n");
	scanf("%lf", &y);
	
	if (x > y)
	{
		printf("%.2lf is bigger than %.2lf", x, y);
	}
	else if (x == y)
		printf("%.2lf is equal to %.2lf", x, y);
	
	else
		printf("%.2lf is bigger than %.2lf", y, x);
	printf("%lf is NOT equal to %lf", x, y);
	
	if (x)
		printf("%.2lf is valid");
	printf("This statement is valid.");
	
	return 0;
	
	
}