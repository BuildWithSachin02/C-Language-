#include<stdio.h>
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
int main(){
	int i,j,k;
	char ch = 'a';
	
		for(i=0;i<5;i++){
			for(k=4;k>i;k--){
				printf("  ");
			}
			for(j=i;j>=0;j--){
				printf("%c ",'A'+j);
			}
			printf("\n");
		}
}
