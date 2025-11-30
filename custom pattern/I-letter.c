#include<stdio.h>
/*
* * * * *
	*
	*
	*
	*
	*
* * * * *
*/
int main(){
	int i,j;
	int n=7;
		for(i=1;i<=n;i++){
			for(j=1;j<=5;j++){
				if(
					i==1||
					i==7||
					j==3
				){
					printf("* ");	
				}else{
					printf("   ");
				}
			}
			printf("\n");
		}
}
