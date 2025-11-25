#include<stdio.h>
/*
Q.2 if input 92 then print A grade and excellent work.
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
		printf("your grade is : %c\n",grade);
	}
	
	switch(grade){
		case 'A': printf("Excellent work!");break;
		case 'B' : printf("Well Done");break;
		case 'C' : printf("Good Job");break;
		case 'D' : printf("You Passed");break;
		case 'E' : printf("Sorry You Failed");break;
	}
	return 0;
}
