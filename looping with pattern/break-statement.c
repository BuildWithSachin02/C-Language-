#include<stdio.h>
/*	
	apna colege Q.17
	keep taking number as input from user until user enter an odd numbers.
	
	mujhe kuch esa program bna jise user agr even number print kre usse 
	mujhe print krte rehna aur ager uuser ne odd num input kiya toh
	usse mujhe break krna h 
*/
int main(){
	int n;
	
	do{
		printf("enter the numbers : ");
		scanf("%d",&n);
		printf("%d\n",n);
		
		if( n % 2 != 0){
			break;
			
		}	
	}
	while(10);
		printf("you enter odd number we are stoping our program.");
	return 0;
}
	
