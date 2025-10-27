#include<stdio.h>
#include<conio.h>
/*
abb hme centimeter(cm) find krna jesa hmne pehle kiya tha 
abb hme usser se input lena h 
foot-inches=cm
1 foot=12 inches, 1 inches=2.54cm,
formula
step-1. pehle toh cm ko inches me convert krna h 
total_inches=xyz/2.54=xxx;
tatol_inches=bacha hua%12=0;
*/
void main(){
	float cm;
	int feet,inches;
	float total_inches;
	/*input by usser*/
	printf("enter your height in cm: ");
	scanf("%f",&cm);
	/*convert into cm to inches*/
	total_inches=cm/2.54;
	/*get feet and remaining*/
	feet=(int)(total_inches/12);
	inches=(int)(total_inches)%12;
	printf("this is your: %d feet and %d inches\n",feet,inches);
	
	
	
	
	
	
	
	
	
	
	
}
