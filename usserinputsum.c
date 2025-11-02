#include<stdio.h>

/*sum of even number and 0-10*/
int main(){
	int i,N,sum=0;
	
	printf("enter the any numbers: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		if(i % 2 == 0){
			sum = sum+i;
		}
	}
	printf("this is your sum: %d",sum);
}
