#include<stdio.h>
#include<conio.h>

/*
chatgpt Q.2
	Write a program to check whether a number is even or odd.
*/
int main(){
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	if(num % 2 != 0)
		printf("%d is the even.\n",num);
	else
		printf("%d is odd.\n",num);	
}
