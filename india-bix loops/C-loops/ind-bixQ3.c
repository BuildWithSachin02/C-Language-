#include<stdio.h>
/*
	ind-bix Q.3=>
		Look at this series: 36, 34, 30, 28, 24, ... What number should come next?
	issme pehle pehle -2 kiya -4 kiya h voh continue h.
	(for loop)
*/
//int main(){
//	int x = 36;
//	int i;
//	printf("Look at this series: 36, 34, 30, 28, 24, ... What number should come next?\n");
//	for(i = 1; i <= 6; i++){
//		printf("%d  ",x);
//		if(i % 2 == 1){
//			x = x - 2;
//		}else{
//			x = x - 4;
//		}
//	}
//}


//do-while


//int main(){
//	int x = 36;
//	int i = 1;
//	
//	do{
//		printf("%d\n",x);
//		if(i % 2 == 1){
//			x = x - 2;
//		}else{
//			x = x -4;
//		}
//		i++;
//	}while(i <= 6);
//}


// while


int main(){
	int x = 36;
	int i;
	
	while(i <= 6){
		printf("%d\n",x);
		if(i % 2 == 1){
			x = x - 2;
		}else{
			x = x -4;
		}
		i++;
	}
	
}
