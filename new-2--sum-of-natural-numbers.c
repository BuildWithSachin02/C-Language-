#include<stdio.h>

int main(){
	int n,i,sum=0;
	printf("enter the numbers: ");
	scanf("%d",&n);
	
	if(n>0){
		for(i = 1; i <= n; i++){
			sum = sum+i;
		}
		
		printf("sum of first %d natural numbers is: %d \n",n,sum);
	}
	for(i=n; i>=n; i--){
			printf("%d\n",sum);
		}
	else{
		printf("this is not valid numbers. \n");
	}
	return 0;
}

