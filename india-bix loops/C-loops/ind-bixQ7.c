#include<stdio.h>
/*
	ind-bixs Q.7
		7. Look at this series: 58, 52, 46, 40, 34, ... What number should come next?
		bht easy h yeh ahme odd me bhi -6 krna h aur even me bhi -6 krna h 
*/
int main(){
	int x = 58;
	int i = 1;
	
//	for(i = 1; i <= 6; i++){
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x - 6;
//		}else{
//			x = x - 6;
//		}
//	}
	
//	do-while
//	do{
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x - 6;
//		}else{
//			x = x - 6;
//		}
//		i++;
//	}while(i <= 6);
	
	// while
	while(i <= 6){
		printf("%d\n",x);
		if(i % 2 == 1){
			x = x - 6;
		}else{
			x = x - 6;
		}
		i++;
	}
}
