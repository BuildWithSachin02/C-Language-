#include<stdio.h>
/*
	ind-bix Q.15 =>
		Look at this series: 80, 10, 70, 15, 60, ... What number should come next?
		odd hme -10 even me +5 add krnege 
*/
int main(){
	int x = 80;
	int y = 10;
	int i = 1;
	
//	for(i = 1; i <= 6; i++){
//		if(i % 2 == 1){
//			printf("%d\n",x);
//			x = x - 10;
//		}else{
//			printf("%d\n",y);
//			y = y + 5;
//		}
//	}
	
//	do-while
//	do{
//		if(i % 2 == 1){
//			printf("%d\n",x);
//			x = x - 10;
//		}else{
//			printf("%d\n",y);
//			y = y + 5;
//		}
//		i++;
//	}while(i <= 6);

//	while
	while(i <= 6){
		if(i % 2 == 1){
			printf("%d\n",x);
			x = x - 10;
		}else{
			printf("%d\n",y);
			y = y + 5;
		}
		i++;
	}
}
