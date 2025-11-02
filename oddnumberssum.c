#include<stdio.h>

/*odd number of sum 0-100*/

int main(){
	int i,sum=0;
	
	for(i=1; i<=100; i++){
		if(i % 2 != 0){
			sum = sum+i;
		}
	}
	printf("first of odd numbers sum: %d",sum);
}
