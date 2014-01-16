#include <stdio.h>

int main()
{
	int a, b, addition, subtraction, multiplication, division;
	
	printf("Enter 2 integers\n");
	scanf(" %i %i", &a, &b);
	
	
	printf("Addition:  \n\n");

	addition = a + b;
	printf("%i + %i = %i\n", a, b, addition);
	
	printf("Subtraction:  \n\n");
	
	if(a < b){
		subtraction = b - a;
		
		printf(" %i - %i = %i\n", b, a, subtraction);
	}

	else{
		subtraction = a - b; 
	
		printf(" %i - %i = %i\n", a, b, subtraction);
		
		printf("Multiplication:  \n\n");
	}
		
	if(a < b){
		multiplication = b * a;
		printf(" %i X %i = %i\n", b, a, multiplication);
	}
	else{
		multiplication = a * b;
		printf(" %i X %i = %i\n", a, b, multiplication);
	}
		
	printf("Division:  \n\n");
	
	if(a < b){
		division = b / a;
		printf(" %i / %i = %i\n", b, a, division);
	}
	else{
		division = a / b;
		printf(" %i / %i = %i\n", a, b, division);
	}
}
	
