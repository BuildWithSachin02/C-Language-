#include<stdio.h>
/*
Q.16

1 0 1 0 1
0 1 0 1
1 0 1
0 1
1

12345
1234
123
12
1
*/
int main(){
	int i,j,start;
		for(i = 5; i >= 1; i--){
			if(i % 2 == 1){
				start = 1;
			}else{
				start = 0;
			}
			for(j = 1; j <= i; j++){
				printf("%d ",start);
				start = 1 - start;
			}
			printf("\n");
		}
}
