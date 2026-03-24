#include <stdio.h>

//declaratinvg a function
void check_even_odd(int num){
	
	// check if the number is even or odd using the Bitwise AND operator
	if(num & 1){
		printf("The number is odd");
	} else{
		printf("The number is even");
	}
	
	
	
}

int main(){
	int num;
	
	printf("Checking a number is even or odd\n");
	printf("---------------------------------\n\n");
	
	//taking inputs
	printf("Enter a number to check: ");
	scanf("%d", &num);
	
	//calling the function
	check_even_odd(num);
	
	
	return 0;
}
