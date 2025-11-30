#include<stdio.h>
/*
  1 2 3 4 5   ? columns (j)
1     *      
2   *   *    
3 * * * * *  
4 *       *  
5 *       *  
?
rows (i)



*/
int main(){
	int i,j;
	int n = 5;
	
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(
					(i==1 && j==3)||
					(i==2 && (j==2|| j==4))||
					(i==3)||
					(i>3 && (j==1 || j==5))
				){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
}
