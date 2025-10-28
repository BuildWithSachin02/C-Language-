#include<stdio.h>
#include<conio.h>
/*
yt-homework Q.3
	write a program to point the smallest numbers.
*/
int main(){
	int a,b,c;
	/*usser input*/
	printf("enter three number: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c)
		printf("%d is the smallest numbers.\n",a);
	 else if(b<c)
	 	printf("%d is the smallest numbers.\n",b);
	else
	printf("%d is the smallest numbers.\n",c);	 	
		
		
		
		
		
}
