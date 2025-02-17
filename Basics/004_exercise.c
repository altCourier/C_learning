#include <stdio.h>

int main()
{
	double principal, interest, time;
	
	printf("Enter principal amount: \n");
	scanf("%lf", &principal);
	
	printf("Enter rate of interest: \n");
	scanf("%lf", &interest);
	
	printf("Enter time (years): \n");
	scanf("%lf", &time);
	
	printf("The simple interest is %.2lf.", (principal*interest*time)/100);
	
	return 0;
}
