#include<stdio.h>

/*
	ind-bix Q.4
		4. Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?
		issme pehle  -1 kiya fir +2 kiya h 
*/
int main(){
	int num = 22;
	int i = 1;
	
//	for(i = 1; i <= 7; i++){
//		printf("%d\n",num);
//		
//		if(i % 2 == 1){
//			num = num - 1;
//		}else{
//			num = num + 2;
//		}
//	}

//	do-while loop

//	do{
//		printf("%d\n",num);
//		if(i % 2 == 1){
//			num = num - 1;
//		}else{
//			num = num + 2;
//		}
//		i++;
//	}while(i <= 7);

//	while loop


	while(i <= 7){
		printf("%d\n",num);
		if(i % 2 == 1){
			num = num - 1;
		}else{
			num = num + 2;
		}
		i++;
	}



















}
