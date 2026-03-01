#include <stdio.h>


// Calculator
int main() {
	
	double num1, num2;
	char op;
	char again = 'y';
	
	while(again == 'y' || again == 'Y') { //loops function if condition is met
		
		// Taking inputs
		printf("Enter first number: ");
		scanf("%lf", &num1);

		printf("Enter operation(+, -, *, /): ");
		scanf(" %c", &op);
	
		printf("Enter second number: ");
		scanf("%lf", &num2);
	
	
		// Calculations
		if(op == '+') {
			printf("%.2f + %.2f = %.2f\n\n", num1, num2, num1+num2);
		} else if(op == '-') {
			printf("%.2f - %.2f = %.2f\n\n", num1, num2, num1-num2);
		} else if(op == '*') {
			printf("%.2f * %.2f = %.2f\n\n", num1, num2, num1*num2);
		} else if(op == '/') {
			if(num2 == 0){
				printf("Error: Divisor cannot be zero\n\n");
			} else{
				printf("%.2f / %.2f = %.2f\n\n", num1, num2, num1/num2);
			}
		} else {
			printf("Invalid input\n\n");
		}		
		
	printf("Do you want annother calculation(y/n): ");
	scanf(" %c", &again);
	}
	
	
	return 0;
}
