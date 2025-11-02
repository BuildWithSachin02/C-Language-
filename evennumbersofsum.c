#include<stdio.h>

/*write a program sum of natural numbers and sum and even number 100*/

int main(){
	int i,sum=0;
	
	for(i=1; i<=100; i++){
		if(i % 2 == 0){
			sum=sum+i;
		}
	}
	printf("the first of even numbers: %d",sum);
}
