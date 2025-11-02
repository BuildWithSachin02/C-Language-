#include<stdio.h>

/*sum of 20 natural numbers*/

int main(){
	int i,sum=0;
	
	for(i=1; i<=20; i++){
		sum=sum+i;
	}
	printf("sum of first 20 naturals numbers is:%d",sum);
}
