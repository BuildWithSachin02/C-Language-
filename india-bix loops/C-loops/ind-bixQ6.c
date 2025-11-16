#include<stdio.h>
/*
	ind-bix Q6 :=>
	6.	Look at this series: 21, 9, 21, 11, 21, 13, 21, ... What number should come next?
	isme ptaa chal rrha ki 21 yeh repeat h toh yeh fixed aur iske age number change ho rhe h
	+2 increase ho rha h 
	isme hme lena padega x aur y ke variabls lene honge 
*/
int main(){
		int y = 9;
		int i = 1;
		
//		for(i = 1; i <= 8; i++){
//			if(i % 2 == 1){
//				printf("%d\n",21);
//			}else{
//				y = y + 2;
//				printf("%d\n",y);
//			}
//		}
	
//	do-while loop
//	do{
//		if(i % 2 == 1){
//			printf("%d\n",21);
//		}else{
//			y = y + 2;
//			printf("%d\n",y);
//		}
//		i++;
//	}while(i <= 8);

	// while loop 
	while(i <= 8){
		if(i % 2 == 1){
			printf("%d\n",21);
		}else{
			y = y + 2;
			printf("%d\n",y);
		}
		i++;
	}
}

