#include<stdio.h>

/*
	write a program to give  grade to student
	marks < 30 is C
	30 <= marks < 70 is B
	70 <= marks < 90 is A
	90 <= marks <= 100 is A+
*/

 int main(){
 	int marks;
 	
 	printf("enter ur marks(0-100): ");
 	scanf("%d",&marks);
 	
 	 if(marks >= 30 && marks <= 50){
 	 	printf("'C' Grade\n");
	  }
	  else if(marks >= 50 && marks <= 70){ 
	  	printf("'B' grade\n");
	  }
	  else if(marks >= 70 && marks <= 90){
	  	printf("'A' grade\n");
	  }
	  else if(marks >= 90 && marks <= 100){
	  	printf("'A+' grade\n");
	  }
	 else{
	 	printf("not valid\n");
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
