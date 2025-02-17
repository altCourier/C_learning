#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	printf("Enter a string: \n");
	scanf("%s", string);
	
	printf("The lenth of the string is %d", strlen(string));
	
	return 0;
}