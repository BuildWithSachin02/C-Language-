#include<stdio.h>
/*
hw-apnacllg
	wap to check if number is prime or not.
	
*/
int main(){
	int i,n,count;
		do{
			printf("enter the number: ");
			scanf("%d",&n);
				count = 0;
				for(i = 1; i<=n; i++){
					if(n % i == 0){
						count++;
					}
				}
		}while(count != 2); // loop tab tak chlega jab tak prime num naa mile
		printf("%d is prime.",n);
		return 0;
}
