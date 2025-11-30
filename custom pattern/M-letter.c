#include<stdio.h>
/*

* 		*
* *  *  *
*   *   *
* 		*
* 		*
* 		*
* 		*

*/
int main(){
	int i,j,n=7;
		for(i=1;i<=n;i++){
			for(j=1;j<=5;j++){
				if(
					j==1||
					j==5||
					i==2||
					i==3 && j==3
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
