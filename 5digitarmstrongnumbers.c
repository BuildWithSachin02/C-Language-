#include<stdio.h>

/*5 digit armstrong number
	logic:-
		1. Input number
		2. Copy to temp
		3. Har digit ka 4 power nikal ke sum karo
		4. Loop finish hone ke baad compare karo

*/

int main(){
	int num,temp,digit,sum=0;
	
	printf("enter the numbers(0-4-digit num): ");
	scanf("%d",&num);
	
	temp = num;
	
	while(temp>0){
		digit = temp % 10;
		sum = sum+(digit*digit*digit*digit);
		temp = temp/10;
	}
		
		if(sum == num){
			printf("%d is an Armstrong number.\n",num);
		}
		else{
			printf("%d is an not armstrong numbers.\n",num);
		}
	
	
}
