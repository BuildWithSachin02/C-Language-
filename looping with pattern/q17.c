#include<stdio.h>
/*
Q.17

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
	int i,j,start;
		for(i =1; i <= 5; i++){
			start = 1; // pehla num hmesa 1 rhega yeh tha iska  logic 
			for(j = 1; j<= i; j++){
				printf("%d",start);
				start = 1 - start;
			}
			printf("\n");
		}
}
