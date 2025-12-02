#include<stdio.h>
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

1
12
123
1234
12345
*/
int main(){
	int i,j,k;
	char ch = 'A';
		for(i=1;i<=5;i++){
			for(k=5;k>i;k--){
				printf("  ");
			}
			for(j=1;j<=i;j++){
				if(j % 2 == 0){
					printf("0 ");
				}else{
					printf("1 ");
				}
//				printf("%d ",j);
			}
			printf("\n");
		}
	
	
	
	
	
	
}
