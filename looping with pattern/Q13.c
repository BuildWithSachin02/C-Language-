#include<stdio.h>
/*
Q.13

*
* *
* * *
* * * *
* * * * *
1
12
123
1234
12345
 iss me mujhe * ko print krna wana h 5-col-row h cissme 
*/
int main(){
	int i,j;
		for(i = 1; i <= 5; i++){
			for(j = 1; j <= i; j++){
				printf("* ",j);
			}
			printf("\n");
		}
}

