#include<stdio.h>
/*
Q.21
A
A B
A B C
A B C D
A B C D E
*/
int main(){
	int i,j;
	char letter;
		for( i = 'A'; i <= 'E'; i++){
			for(j = 'A'; j <= i; j++){
				printf("%c ",j);
			}
			printf("\n");
		}
}

