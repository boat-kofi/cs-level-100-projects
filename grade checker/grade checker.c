#include <stdio.h>

int main(){
	//declaration of variables
	int score;
	char percent_sign = '%';
	
	printf("An ATU (ACCRA TECHNICAL SCHOOL) grade checker\n");
	printf("---------------------------------------------\n\n");
	
	//taking inputs
	printf("Enter your score: ");
	scanf("%d", &score);
	
	//condition 
	if(score <= 100 && score >= 85){
		printf("Your grade for %d%cis A+\n", score, percent_sign);
	}
	else if(score <= 84 && score >= 80){
		printf("Your grade for %d%c is A\n", score, percent_sign);
	}
	else if(score <= 79 && score >= 75){
		printf("Your grade for %d%c is B+\n", score, percent_sign);
	}
	else if(score <= 74 && score >= 70){
		printf("Your grade for %d%c is B\n", score, percent_sign);
	}
	else if(score <= 69 && score >= 65){
		printf("Your grade for %d%c is C+\n", score, percent_sign);
	}
	else if(score <= 64 && score >= 60){
		printf("Your grade for %d%c is C\n", score, percent_sign);
	}
	else if(score <= 59 && score >= 55){
		printf("Your grade for %d%c is D+\n", score, percent_sign);
	}
	else if(score <= 54 && score >= 50){
		printf("Your grade for %d%c is D\n", score, percent_sign);
	}
	else if(score < 50){
		printf("Your grade for %d%c is F (Fail)\n", score, percent_sign);
	}
	else{
		printf("Invalid score input\n");
	}
	
	
	return 0;
}
