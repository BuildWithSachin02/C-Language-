#include<stdio.h>
/*
	ind-bix Q.10 :=>	
	Look at this series: 31, 29, 24, 22, 17, ... What number should come next?
	issme 31-2 = 29, 29-5=24, 24-2=22, 22-5=17 
	odd me hme -2
	even -5
*/
int main(){
	int x = 31;
	int i = 1;
	
//	for(i =1; i <= 6; i++){
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x - 2;
//		}else{
//			x = x - 5;
//		}
//	}
	
//	do-while
//	do{
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x - 2;
//		}else{
//			x = x - 5;
//		}
//		i++;
//	}while(i <= 6);
	
//	while
	while(i <= 6){
		printf("%d\n",x);
		if(i % 2 == 1){
			x = x - 2;
		}else{
			x = x - 5;
		}
		i++;
	}
}

