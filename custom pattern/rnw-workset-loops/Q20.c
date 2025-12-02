#include<stdio.h>
/*
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1

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
					printf("1 ");
				}else{
					printf("0 ");
				}
//				printf("%d ",j);
			}
			printf("\n");
		}
}
