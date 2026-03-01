#include <stdio.h>


int main(){
	//list variables
	double num1, num2;
	char op;
	char again = 'y';
	
	while(again == 'y' || again == 'Y'){
		//taking inputs
		printf("Enter a number: ");
		scanf("%lf", &num1);
	
		printf("Enter an operation: ");
		scanf(" %c", &op);
	
		printf("Enter a number: ");
		scanf("%lf", &num2);

	
		//calculation
		if(op == '+') {
			printf("%.2f + %.2f = %.2f\n\n", num1, num2, num1+num2);
		} else if(op == '-') {
			printf("%.2f - %.2f = %.2f\n\n", num1, num2, num1-num2);
		} else if(op == '*') {
			printf("%.2f * %.2f = %.2f\n\n", num1, num2, num1*num2);
		} else if(op == '/') {
			if(num2 == 0){
				printf("Undefined\n\n");
			} else{
				printf("%.2f / %.2f = %.2f\n\n", num1, num2, num1/num2);
			}
		} else {
			printf("Invalid input\n\n");
		}
		
	printf("Do you want to continue(y/n): ");
	scanf(" %c", &again);
	
		}

	
	return 0;
}
