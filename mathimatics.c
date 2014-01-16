#include <stdio.h>

int main()
{
	int a, b, addition, subtraction, multiplication, devide;
	
	printf("Enter 2 integers\n");
	scanf(" %i %i", &a, &b);
	
	
	printf("Addition:  \n\n");

	addition = a + b;
	printf("%i + %i = %i", a, b, addition);
	
	printf("Subtraction:  \n\n");
	
	if(a < b){
		subtraction = b - a;
		
		printf(" %i - %i = %i", b, a, subtraction);
	}

	else{
		subtraction = a - b; 
	
		printf(" %i - %i = %i", a, b, subtraction);
		
		printf("Multiplication:  \n\n");
	}
		
	if(a < b){
		multiplication = b * a;
		printf(" %i X %i = %i", b, a, multiplication);
	}
	else{
		multiplication = a * b;
		printf(" %i X %i = %i", a, b, multiplication);
	}
		
		
}
	
