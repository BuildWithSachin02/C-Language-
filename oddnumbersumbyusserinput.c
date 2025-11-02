#include<stdio.h>

/*
	input by usser and odd numbers of sum.
*/
int main(){
	int i,N,sum=0;
	
	printf("enter the number");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		if(i % 2 != 0){
			sum = sum+i;
		}
	}
	printf("the sum of odd numbers: %d",sum);
}
