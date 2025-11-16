#include<stdio.h>
/*
	ind-bix Q.15 :=>
		Look at this series: 544, 509, 474, 439, ... What number should come next?
		Each number is Subtracted by -35 we have to program this questions and so do it.
*/
int main(){
	int x = 544;
	int i = 1;
	
//	for(i = 1; i <= 5; i++){
//		printf("%d\n",x);
//		x = x - 35;
//	}
	
//	do-while
//	do{
//		printf("%d\n",x);
//		x = x - 35;
//		i++;
//	}while(i <= 5);

//	while
	while(i <= 5){
		printf("%d\n",x);
		x = x - 35;
		i++;
	}
}

