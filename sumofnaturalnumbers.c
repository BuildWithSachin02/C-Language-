#include<stdio.h>

/*
	Write a program to print the sum of first 10 natural numbers.
*/
int main(){
	int i,sum=0;
	printf("enter the numbers: ");
	scanf("%d",&i,&sum);
	
	for(i=1; i<=10;i++){
		sum=sum+i;
	}
	 printf("Sum of first 10 natural numbers is: %d", sum);
}
