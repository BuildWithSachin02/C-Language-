#include<stdio.h>
/*
	int-bix Q.13 =>
		Look at this series: 2, 4, 6, 8, 10, ... What number should come next?
		+2 plus ho rha h
*/
int main(){
	int x = 2;
	int i = 1;
	
//	for(i = 1; i <= 6; i++){
//		printf("%d\n",x);
//		x = x + 2;
//	}
	
//	do-while
//	do{
//		printf("%d\n",x);
//		x = x + 2;
//		i++;
//	}
//	while(i <= 6);
	
//	while
	while(i <= 6){
		printf("%d\n",x);
		x = x + 2;
		i++;
	}
}
