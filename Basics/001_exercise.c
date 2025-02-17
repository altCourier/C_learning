#include <stdio.h>

int main()
{
	// Declaration
	double length, width;
	
	// Enter length
	printf("Enter the lenth: \n");
	scanf("%lf", &length);

	// Enter width
	printf("Enter the width: \n");
	scanf("%lf", &width);
	
	double area = length * width;
	double perimeter = 2(length * width);
	
	printf("The area is %.2lf, and the perimeter is %.2lf.", length * width, 2(length * width));
	
	return 0;
}