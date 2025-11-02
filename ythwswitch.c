#include<stdio.h>

/*
	write a program check if student passed or failed 
	marks > 30 is pass
	marks <= 30 is failed
*/

int main(){
	int number;
	printf("enter your subject marks(0-100): ");
	scanf("%d",&number);
	
	if(number > 30 && number <= 100){
		printf("pass\n");
	}
	else if(number <= 30 && number <= 100){
		printf("failed\n");
	}
	else{
		printf("not valid\n");
	}
	
	
}
