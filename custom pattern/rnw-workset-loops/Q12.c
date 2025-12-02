#include<stdio.h>
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
int main(){
	int i,j,k;
	
		for(i=1;i<=5;i++){
			for(k=5;k>i;k--){
				printf("  ");
			}
			for(j=1;j<=i;j++){
				printf("* ",i);
			}
			printf("\n");
		}
}
