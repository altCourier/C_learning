#include <stdio.h>
#define LBS_PER_KGS 2.205

int main()
{
	printf("Convert kgs to lbs: ");
	// Declaration: 
	double kgs;
	double lbs;
	
	// Initialization:
	kgs = 2;
	lbs = kgs * 2.205;
	/*
	Notice that 2.205 is a constant.
	We wish to define it ^^
	*/
	lbs = kgs * LBS_PER_KGS;
	// Formatting: 
	printf("%lf", lbs);
	
	return 0;
}