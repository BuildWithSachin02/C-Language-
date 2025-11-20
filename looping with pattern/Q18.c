#include<stdio.h>
/*
Q.18

0
0 1
0 1 0
0 1 0 1
0 1 0 1 0


issme first num 0 fix h 
*/
int main(){
	int i,j,start;
		for(i = 1; i <= 5; i++){
			start = 0;
			for(j = 1; j <= i; j++){
				printf("%d ",start);
				start = 1 - start;
			}
			printf("\n");
		}
}
