#include<stdio.h>
/*
- | - | -
- | - |
- | -
- |
-
 12345
 1234
 123
 12
 1
*/
int main(){
	int i,j,k;
		for(i=5;i>=1;i--){
			for(k=i;k<5;k++){
				printf("  ");
			}
			for(j=1;j<=i;j++){
				if(j % 2 == 1){
					printf("- ");
				}else{
					printf("/ ");
				}
//				printf("%d ",j);
			}
			printf("\n");
		}
}
