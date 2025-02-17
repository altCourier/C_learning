#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a three-digit number: \n");
	scanf("%d", &num);
	
	int hundreds = num / 100;
	int tens = (num/10) % 10;
	int ones = num % 10;
	
	int sum = hundreds + tens + ones;
	
	printf("The sum of the digits is %d.\n", sum);
	
	return 0;
	
}