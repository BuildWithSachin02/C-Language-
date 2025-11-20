#include<stdio.h>
/*
Q.15

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

issme odd = 1
even num = 0 
*/
int main(){
	int i,j,start;
		for(i = 1; i <= 5; i++){
			// checking number  odd / even number
			if(i % 2 == 1){
				start = 1;
			}else{
				start = 0;
			}
			for(j = 1; j <= i; j++){
				printf("%d ",start);
				start = 1 - start;
			}
			printf("\n");
		}
}

