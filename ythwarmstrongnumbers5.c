#include<stdio.h>

/*
	5 digit ke numner ke armstrong numbers.
*/

int main(){
	int num,temp,digit,sum=0;
	
	printf("enter the numbers if you want fint this number are armstrong is it ?: ");
	scanf("%d",&num);
	
	temp = num;
	while(temp>0){
		sum = sum+(digit*digit*digit*digit*digit);
		temp = temp/10;
		digit = temp % 10;
	}
	if(num == sum){
		printf("%d this is  armstrong number.\n",num);
	}
	else{
		printf("%d this is an not armstrong numbers.\n",num);
	}
	
}
