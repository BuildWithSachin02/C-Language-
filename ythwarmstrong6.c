#include<stdio.h>

/*6-digit armstrong numbers*/
int main(){
	int num,temp,digit,sum=0;
	printf("enter the numbers: ");
	scanf("%d",&num);
	
	temp = num;
	while(temp>0){
		digit = temp % 10;
		sum = sum+(digit*digit*digit*digit*digit*digit);
		temp = temp/10;
	}
	if(num == sum){
		printf("%d is armstrong numbers.\n");
	}
	else{
		printf("%d is not armstrong.\n");
	}
}
