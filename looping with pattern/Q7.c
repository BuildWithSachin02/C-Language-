#include<stdio.h>
/*
Q.7

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
int main(){
	int i,j;
		for(i = 1; i <= 5; i++){
			for(j = i; j >= 1; j--){
				printf("%d ",j);
			}
			printf("\n");
		}
}
