#include<stdio.h>
/*
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1
11111
2222
333
44
5
*/
int main(){
	int i,j,k;
		for(i=1;i<=5;i++){
			for(k=1;k<i;k++){
				printf("  ");
			}
			for(j=i;j<=5;j++){
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
