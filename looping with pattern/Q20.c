#include<stdio.h>
/*
-
| -
- | -
| - | -
- | - | -

isme muhe 0-1 jesa patter h 
1
12
123
1234
12345
*/
int main(){
	int i,j;
	char start;
		for(i = 1; i <= 5; i++){
			if(i % 2 == 1){
				start = '-'; /// odd ke liye 
			}else{
				start = '|'; // even h toh yrh 
			}
			for(j=1; j<=i; j++){
				printf("%c ",start);
				if( start == '-'){ // isme hum flip kr rhe hyeh nhi toh boh krdo
					start = '|';
				}else{
					start = '-';
				}
			}
			printf("\n");
		}
}
