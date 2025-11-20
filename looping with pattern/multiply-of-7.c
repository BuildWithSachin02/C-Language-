#include<stdio.h>
/*
apna college Q-18:
	keep taking number as input from user until user enters a number which is 
	multiple of 7.
	
	issme mujhe 
*/
int main(){
	int n;
		do{
			printf("enter the number of 7 of multiply : ");
			scanf("%d",&n);
			printf("%d\n");
			
			if(n % 7 == 0){
				break;
			}
		}while(7);
		{
			printf("this number is multiply of 7 so this program end.");
		}
			
		
}
