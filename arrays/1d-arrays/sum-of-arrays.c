#include<stdio.h>
/*
	wap to find sum of all elements of array.
*/
int main(){
	int i;
	int sum = 0;
	int a[5]={1,2,3,4,5};
	
	for(i=0;i<=5;i++){
		sum = sum +a[i];
	}
	printf("%d",sum);
}
