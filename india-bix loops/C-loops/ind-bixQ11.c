#include<stdio.h>
/*
ind-bixs : Q.11 =>
	Look at this series: 1.5, 2.3, 3.1, 3.9, ... What number should come next?
	issme hm yeh krenge ki  1.5-2.3 = 0.8, 2.3-3.1 = 0.8, ?
	issme each number +0.8 se hm plus krnge 
*/
int main(){
	float x = 1.5;
	int i = 1;
	
//	for(i = 1; i <= 5; i++){
//		printf("%.1f\n",x);
//		if(i % 2 == 1){
//			x = x + 0.8;
//		}else{
//			x = x + 0.8;
//		}
//	}

//	do-while
//	do{
//		printf("%.1f\n",x);
//		if(i % 2 == 1){
//			x = x + 0.8;
//		}else{
//			x = x + 0.8;
//		}
//		i++;
//	}while(i <= 5);

//	while
	while(i <= 5){
		printf("%.1f\n",x);
		if(i % 2 == 1){
			x = x + 0.8;
		}else{
			x = x + 0.8;
		}
		i++;
	}
}
