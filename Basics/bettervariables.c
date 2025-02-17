#include <stdio.h>

int main() 
{
	char letter = 'a';
	printf("Letter is %c\n", letter);
	printf("Letter is %d\n", letter); // Its ASCII number.
	
	double a = 3.2;
	printf("Double a is %f\n", a);
	printf("Double a is %lf\n", a);
	// lf -- > scanf and printf
	// f --> printf
	
	int x = 5.2; // Truncates the number.
	prinf("x = %d", x);
	
	double y = 5/2;
	// int / int = integer 5 / 2 = 2
	// double 2 = 2.000000
	
	double w;
	w = 5.0 / 2; // OR 5 / 2.0 OR 5.0 / 2.0
	// This is a mixed type expression.
	printf("w = %lf\n", w);
	
	int z;
	z = 5.0 / 2.0; // Stored in int --> Truncated
	print("z = %d\n", z);
	
	int total = 4;
	int count = 3;
	double avg = (double)total / count;
	double avg2 = total / count;
	// Type casting DOES NOT change the variable.
	printf("Avg is = %lf\n", avg);
	printf("Or is it ... %lf", avg2);
	
	
	
}