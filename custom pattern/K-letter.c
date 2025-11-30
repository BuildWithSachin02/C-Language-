#include<stdio.h>
/*
*	   *
*     *
*   *
*  *
*    *
*     *
*      *
*/
int main(){
	int i,j,n=7;
		for(i=1;i<=n;i++){
			for(j=1;j<=5;j++){
				if(
					j==1||
					(i==1 && j==5)||
					(i==2 && j==4)||
					(i==3 && j==3)||
					(i==4 && j==2)||
					(i==5 && j==3)||
					(i==6 && j==4)||
					(i==7 && j==5)
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
