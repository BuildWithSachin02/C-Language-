#include<stdio.h>
/*
Q.3 check eligibility
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
		case 'A': printf("Excellent work!\n");break;
		case 'B' : printf("Well Done\n");break;
		case 'C' : printf("Good Job\n");break;
		case 'D' : printf("You Passed\n");break;
		case 'E' : printf("Sorry You Failed\n");break;
	}
	switch(grade){
		case 'A':
		case 'B':
	    case 'C':
	    case 'D':
			printf("you are eligible for next level.");
			break;
		case 'E':
		case 'F':
			printf("not eligible failed.");
			break;		
	}
	return 0;
}

