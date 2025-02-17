/*
This is a double line comment
*/

// This is a one line comment.

#include <stdio.h>
// # --> preprocessor directive
// similiar to: 
// import "standard input output header file" 

int main()
// returns integer value : 0
// main() is NOT an convention here.
// tells the program WHERE TO START.
{
// Indentation DOES NOT matter.
// {} indicate indentation.
	printf("Hey!"); // --> reason why we #include <stdio.h>
	printf("\nC does not include new line characters!");
	return 0;
}