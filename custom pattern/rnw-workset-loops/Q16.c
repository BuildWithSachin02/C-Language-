#include<stdio.h>
/*
A B C D E
B C D E
C D E
D E
E

12345
2345
345
45
5
*/
int main(){
	int i,j,k;
	char ch = 'A';
		for(i=0;i<5;i++){
			for(k=0;k<i;k++){
				printf("  ");
			}
			for(j=i;j<5;j++){
				printf("%c ",'A' + j);
			}
			printf("\n");
		}
	
	
	
	
	
	
}
