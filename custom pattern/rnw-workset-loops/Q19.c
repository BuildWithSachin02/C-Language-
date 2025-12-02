#include<stdio.h>
/*
1 0 1 0 1
0 1 0 1
1 0 1
0 1
1

12345
2345
345
45
5
*/
int main(){
	int i,j,k;
		for(i=1;i<=5;i++){
			for(k=1;k<i;k++){
				printf("  ");
			}
			for(j=i;j<=5;j++){
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
