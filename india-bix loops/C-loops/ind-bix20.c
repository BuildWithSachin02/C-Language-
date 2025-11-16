#include<stdio.h>
/*
	ind-bix Q.20:=>
		28 25 5 21 18 5 14
		issme hme 28 pehle 28 start krenghe 
		issme 5 fixed h har 3 re number pe odd pe -3 krna h aur even pe -4 krna h 
		yeh program even odd se -3/-4 se nhi ho rhaa issme hmne count se hmne 
		count++ 
*/
int main(){
	int x = 28;
	int i = 1;
	int count = 1;
	
	for(i = 1; i <= 8; i++){
		if(i % 3 == 0){
			printf("5\n");
		}else{
			printf("%d\n",x);
			if(count % 2 == 1){
				x = x - 3;	// odd se -3 hoga 
			}else{
				x = x - 4;	// even se -4 
			}
			count++;
		}
	}
}
