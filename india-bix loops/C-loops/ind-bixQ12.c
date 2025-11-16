#include<stdio.h>
/*
	ind-bix Q.12=>
		Look at this series: 14, 28, 20, 40, 32, 64, ... What number should come next?
		issme start hoga 14 hogi  isse dekh lg rha ki har ek number *2 se multiply 
		ho rha h 14*2=28 odd mujhe pe hum *2 krnge even pe -8 krnege 
*/
int main(){
	int x = 14;
	int i = 1;
	
//	for(i = 1; i <= 7; i++){
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x*2;
//		}else{
//			x = x - 8;
//		}
//	}

//	do-while
//	do{
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x*2;
//		}else{
//			x = x - 8;
//		}
//		i++;
//	}while(i <= 7);

//	while
	while(i <= 7){
		printf("%d\n",x);
		if(i % 2 == 1){
			x = x*2;
		}else{
			x = x - 8;
		}
		i++;
	}
}
