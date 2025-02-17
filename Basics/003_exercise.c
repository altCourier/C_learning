#include <stdio.h>
#define PI 3.14159
#include <math.h>

int main()
{
	double radius;
	
	printf("Enter the radius: \n");
	scanf("%lf", &radius);
	
	printf("The circumference is %.2lf, and the area is %.2lf.", radius*PI*2, radius*radius*PI);
	
	double area = pow(radius, 2) * PI;
	
	return 0;
}