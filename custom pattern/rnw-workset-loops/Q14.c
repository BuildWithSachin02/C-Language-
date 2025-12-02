#include<stdio.h>
/*
A
A B
A B C
A B C D
A B C D E

1
12
123
1234
12345
*/
int main(){
	int i,j,k;
	char ch = 'a';
	
		for(i=0;i<5;i++){
			for(k=4;k>i;k--){
				printf("  ");
			}
			for(j=0;j<=i;j++){
				printf("%c ",'A'+ j);
			}
			printf("\n");
		}
		
		
		
		
		
}
