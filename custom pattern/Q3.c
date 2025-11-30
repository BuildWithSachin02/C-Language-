#include<stdio.h>
#include<conio.h>
/*
12345 54321
1234   4321
123		321
12		 21
1		  1	
*/
int main(){
	int i,j,k,l;
		for(i=5;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("%d ",j);
			}
			for(k=i;k<5;k++){
				printf("    ",k);
			}
			for(l=i;l>=1;l--){
				printf("%d ",l);
			}
			printf("\n");
		}
}
