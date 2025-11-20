#include<stdio.h>
/*
	skip statement usses
	agr mujhe kisi bhi part ko nhi show krwana h toh mujhe skip
	 krna toh aage ke part ko show krwna h toh hme continue ka use krna hoga. 
*/
int main(){
	int i,j;
		for(i = 5; i <= 50; i++){
			if(i % 2 != 0){
//				continue;// iss hmra 3 wla part skill hua agge ka part run kiya h 
				printf("%d\n",i);
			}
			
		}
}
