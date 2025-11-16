#include<stdio.h>
/*
	ind-bix Q.18=>
		Look at this series: 5.2, 4.8, 4.4, 4, ... What number should come next?
		each number is subtracted by -0.4
*/
int main(){
	float x = 5.2;
	int i = 1;
//	for(i = 1; i <= 5; i++){
//		printf("%.1f\n",x);
//		x = x - 0.4;
//	}

//	do-while
//	do{
//		printf("%.1f\n",x);
//		x = x - 0.4;
//		i++;
//	}while(i <= 5);

//	while
	while(i <= 5){
		printf("%.1f\n",x);
		x = x - 0.4;
		i++;
	}
}
