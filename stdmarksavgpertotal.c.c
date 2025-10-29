#include<stdio.h>
#include<conio.h>

/*
chatgpt-questions:-
	Write a program to input marks of 5 subjects and calculate 
	the total, average, and percentage.

*/

int main(){
	int s1,s2,s3,s4,s5,total;
	float average,percentage;
	printf("enter your 5 subject marks: ");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
//	total = s1 + s2 + s3 + s4 + s5;
	total = s1 + s2 + s3 + s4 + s5;
	average = total / 5.0;/*total 5 subject h isliye aur 5.0 qki 
									voh float h*/
	percentage = (total/500.0)*100;
	printf("\n this is your total marks = %d",total);
	printf("\n this is your average = %f",average);
	printf("\n this is your percentage = %f",percentage);
	
	
	
	
	
	
	
	
	
	
	
}
