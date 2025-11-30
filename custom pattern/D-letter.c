#include<stdio.h>
/*

  1 2 3 4 5   ? columns
1 * * * *     ? row 1
2 *       *   ? row 2
3 *       *   ? row 3
4 *       *   ? row 4
5 *       *   ? row 5
6 *       *   ? row 6
7 * * * *     ? row 7

*/
int main(){
	int i,j;
	int n=7;
		for(i=1;i<=n;i++){
			for(j=1;j<=5;j++){
				if(
					(i==1 && (j<=4))||	
					(i==2 && (j==1 || j==5))||
					(i==3 && (j==1 || j==5))||
					(i==4 && (j==1 || j==5))||
					(i==5 && (j==1 || j==5))||
					(i==6 && (j==1 || j==5))||
					(i==7 && (j<=4))
					
					
					
					
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
