#include<stdio.h>
/*
Q.3
	devlop a program to find the sum of a number first and last digits.
*/
int main(){
	int num;
	int count = 0;
	
	int sum =0;
	int fd=0;
	
//	printf("%d",ld);
	printf("enter the number: ");
	scanf("%d",&num);
	int ld=num % 10;
	while(num>9){
		num = num / 10;
		fd = num;
		sum = fd+ld;
	}
		printf("%d",sum);
	
}
