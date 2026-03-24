#include <stdio.h>
//declaration of a function
double simple_interest(double a, double b, double c){
	return (a * b * c)/100;
}

int main(){
	
	double a, b, c; //declaration of variables
	
	//taking inputs
	printf("Enter your deposit: ");
	scanf("%lf", &a);
	printf("Enter the rate: ");
	scanf("%lf", &b);
	printf("How long: ");
	scanf("%lf", &c);
	
	double interest = simple_interest(a, b, c); //assigning the function to a variable
	printf("%.2f", interest);
	
	return 0;
	
}
