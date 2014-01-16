#include <stdio.h>

int main()
{
	int a, b, result;
	
	printf("Enter 2 integers\n");
	scanf(" %i %i", &a, &b);
	
	result = a + b;
	
	printf("a + b = ", result);
}
