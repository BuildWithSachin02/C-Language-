#include<stdio.h>
/*
*     *
*     *
*     *
* * * *
*     *
*     *
* 	  *
*/
int main(){
	int i,j;
	int n=7;
		for(i=1;i<=n;i++){
			for(j=1;j<=4;j++){
				if(
					j==1 ||
					j==4 ||
					(i==4)
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
