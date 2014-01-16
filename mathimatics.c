#include <stdio.h>

int main()
{
	int a, b, addition, subtraction, multiply, devide;
	
	printf("Enter 2 integers\n");
	scanf(" %i %i", &a, &b);
	
	addition = a + b;
	
	printf("%i + %i = %i", a, a, addition);
	
	if(a < b)
		subtraction = b - a;
		
		printf(" %i - %i = %i", b, a, subtraction);

	else
		subtraction = a - b;
	
		printf(" %i - %i = %i", a, b, subtraction);
}
	
