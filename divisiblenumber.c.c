#include<stdio.h>
#include<conio.h>

/*
chatgpt-questions:-
	Write a program to check if a number is divisible by 5 and 11 
	or not.
*/
int main(){
	int num;
	printf("enter the any numbers: ");
	scanf("%d",&num);
	if(num % 5 == 0 && num % 11 == 0)
		printf("%d a number is divisible by both 5 and 11.\n",num);
//	else if(num % 11 == 0)
//		printf("%d a number is divisible by 11.\n",num);		
	else
		printf("%d is not divisible by both 5 and 11.\n",num);
	
	
	
	
}
