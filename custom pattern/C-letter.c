#include<stdio.h>
/*
 1 2 3 4	
1* * * *
2*
3*
4*
5*
6*
7* * * *

*/
int main(){
	int i,j;
	int n =7;
		for(i=1;i<=n;i++){
			for(j=1;j<=4;j++){
				if(
					i==1 ||
					i==7 ||   
					j==1
					
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
