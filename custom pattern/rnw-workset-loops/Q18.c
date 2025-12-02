#include<stdio.h>
/*
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1

1
22
333
4444
55555
*/
int main(){
	int i,j,k;
		for(i=1;i<=5;i++){
			for(k=5;k>i;k--){
				printf("  ");
			}
			for(j=1;j<=i;j++){
				if(i % 2 == 1){
					printf("1 ");
				}else{
					printf("0 ");
				}
//				printf("%d ",i);
			}
			printf("\n");
		}
}
