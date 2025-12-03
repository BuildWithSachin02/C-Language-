#include<stdio.h>
void main (){
//	1			      1
//	1 2 		    2 1
//  1 2 3	      3 2 1
//	1 2 3 4	    4 3 2 1
// 	1 2 3 4 5 5 4 3 2 1	

		int i=1;
		int j =1;
		int k =1;
		
		for(i=1;i<=5;i++){
			for(j=1;j<=i;j++)
			{
			printf("%d ", j);
			}
		
			for(k=5;k>i;k--){
				printf("    ");
			}
			for(j=i;j>=1;j--)
			{
				printf("%d ", j);
			}
				printf( "\n");
		}
}
