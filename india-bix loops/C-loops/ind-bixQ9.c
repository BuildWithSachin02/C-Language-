#include<stdio.h>
/*
	ind-bix Q.9:=>
		Look at this series: 8, 22, 8, 28, 8, ... What number should come next?
		issme 8 yeh repeat number h toh hum isse odd me repeat krenge aur even me +6 krenge 
*/
int main(){
	int x = 22;
	int i = 1;
	
//	for(i = 1; i <= 6; i++){
//		if(i % 2 == 1){
//			printf("%d\n",8);
//		}else{
//			x = x + 6;
//			printf("%d\n",x);
//		}
//	}
//	do-while
//	do{
//		if(i % 2 == 1){
//			printf("%d\n",8);
//		}else{
//			printf("%d\n",x);
//			x = x + 6;	
//		}
//		i++;
//	}while(i <= 6);

//	while loop
	while(i <= 6){
		if(i % 2 == 1){
			printf("%d\n",8);
		}else{
			printf("%d\n",x);
			x = x + 6;	
		}
		i++;
	}
}
