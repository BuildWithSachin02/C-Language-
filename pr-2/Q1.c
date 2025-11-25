#include<stdio.h>
/*
Q.1 devlop grade calculater 
	devlop a program that makes a score out of 100 as input and calculate 
	the corresponding grade using a ternary operator. Allocate grade from
	A to F for varius ranges.
*/
int main(){
	int n;
	char grade;
	printf("enter your masks: ");
	scanf("%d",&n);
	grade = (n>1 && n<=50)? 'F':
	        (n>50 && n<=60)? 'E':
	        (n>60 && n<=70)? 'D':
	        (n>70 && n<=80)?'C':
		    (n>80 && n<=90)?'B':
	        (n>90 && n<=100)?'A': 'X'; 
	
	if(grade == 'X'){
		printf("invalide input.");
	}else{
		printf("your grade is : %c",grade);
	}
	return 0;
}
