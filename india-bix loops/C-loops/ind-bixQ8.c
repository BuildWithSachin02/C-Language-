#include<stdio.h>
/*
	ind-bixs Q.8:=>
		Look at this series: 3, 4, 7, 8, 11, 12, ... What number should come next?
	issme pehle +1 odd numbers pe  h fir +3 h even  number pe 			
*/
int main(){
	int x = 3;
	int i = 1;
	
//	for(i = 1; i <= 7; i++){
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x + 1;
//		}else{
//			x = x + 3;
//		}
//	}
	
//	do-while loop
//	do{
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x + 1;
//		}else{
//			x = x + 3;
//		}
//		i++;
//	}while(i <= 7);
//	return 0;

//	while loop
	while(i <= 7){
		printf("%d\n",x);
		if(i % 2 == 1){
			x = x + 1;
		}else{
			x = x + 3;
		}
		i++;
	}
}
