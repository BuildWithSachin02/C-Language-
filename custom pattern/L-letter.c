#include<stdio.h>
/*
*
*
*
*
*
*
* * * *
*/
int main(){
	int i,j,n=7;
		for(i=1;i<=n;i++){
			for(j=1;j<=5;j++){
				if(
					j==1||
					i==7
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
