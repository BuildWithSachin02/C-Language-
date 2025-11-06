#include<stdio.h>

int main(){
	/*write a program print the numbers  from  0 to n , if  n is given by usser*/
	/*for loops ke kiya h yeh */
//	int n,i;
//	printf("enter the number: ");
//	scanf("%d",&n);
//	
//		for(i=0; i<=n; i++){
//			printf("%d \n",i,n);
//		}
	int n;
	printf("enter the numbers: ");
	scanf("%d",&n);
	int i = 0;
	while(i<=n){
		printf("%d \n",i);
		i++;
	}
}
