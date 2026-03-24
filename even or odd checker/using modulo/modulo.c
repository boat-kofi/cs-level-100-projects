#include <stdio.h>

//declaratinvg a function
void check_even_odd(int num){
	
	//finding remainder
	int r = num % 2;
	
	// condition for even or odd
	if(r == 0){
		printf("The number is even");
	} else{
		printf("The number is odd");
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
