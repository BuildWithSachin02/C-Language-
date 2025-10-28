#include<stdio.h>
#include<conio.h>

/*
chtgpt-practice-questions-3
	Write a program to find the smallest of three numbers.
*/
int main(){
	int a,b,c;
	printf("enter the three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c)
		printf("%d is the smallest numbers",a);
	else if(b<a && b<c)
		printf("%d is the smallest numbers",b);
	else
		printf("%d is the smallest numbers in this group",c);		
}
	

