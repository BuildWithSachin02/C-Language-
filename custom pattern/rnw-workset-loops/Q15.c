#include<stdio.h>
/*
A B C D E
A B C D
A B C
A B
A

12345
1234
123
12
1
*/
int main(){
	int i,j,k;
	char ch = 'A';
	
		for(i=5;i>0;i--){
			for(k=i;k<5;k++){
				printf("  ");
			}
			for(j=0;j<i;j++){
				printf("%c ", 'A' + j);
			}
			printf("\n");
		}
	
	
	
	
	
	
	
	
}
