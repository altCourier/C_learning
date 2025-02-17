#include <stdio.h>
#define LBS_PER_KG 2.205

int main()
{
	double kgs;
	
	printf("Enter the kg value: \n");
	scanf("%lf", &kgs);
	
	double lbs = kgs * LBS_PER_KG;
	
	printf("%lf", lbs);
	
	return 0;
}