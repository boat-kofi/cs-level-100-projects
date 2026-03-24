#include <stdio.h>

int main(){
	//declaration of variables
	int choice;
	float temp, converted;
	
	printf("A temperature converter from celcius to fahrenheit and vice versa\n");
	printf("------------------------------------------------------------------\n\n");
	printf("Enter 1 for celcius to fahrenheit or 2 for fahrenheit to celcius: "); //taking inputs
	scanf("%d", &choice);
	
	//condition
	if(choice == 1){
		printf("Enter you temperature in celcius: ");
		scanf("%f", &temp);
		
		converted = (temp * 9.0 / 5.0) + 32;
		printf("%.2f C = %.2f F\n", temp, converted);
	}
	else if(choice == 2){
		printf("Enter you temperature in fahrenheit: ");
		scanf("%f", &temp);
		
		converted = (temp - 32) * 5.0 / 9.0;
		printf("%.2f F = %.2f C\n", temp, converted);		
	}
	else{
		printf("Invalid input\n");
	}
	
	
	
	return 0;
}
