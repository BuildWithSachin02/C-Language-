#include<stdio.h>
/*
	ind-bix Q.17:=>
		Look at this series: 2, 6, 18, 54, ... What number should come next?
	sare number 3 ke sath multiply ho rhaa h *3		
*/
int main(){
	int x = 2;
	int i = 1;
//	for(i = 1; i <= 5; i++){
//		printf("%d\n",x);
//		x = x * 3;
//	}

//	do-while
//	do{
//		printf("%d\n",x);
//		x = x * 3;
//		i++;
//	}while(i <= 5);

//	while
	while(i <= 5){
		printf("%d\n",x);
		x = x * 3;
		i++;
	}
}
