#include<stdio.h>
/*
apna-cllg Q.c
	wap to print prime number in a range.
	aur issme do chgkengi i,j ki start and or end numbers
	issme mujhe ussr se start range lena hoga aur end number lena hoga.
*/
int main(){
	int i,j,count,start,end;
		
			printf("enter the starting range: ");
			scanf("%d",&start);
			printf("enter the ending numbers: ");
			scanf("%d",&end);
			
			printf("prime number are between in and %d/%d \n",start,end);
			
			for(i = start; i <= end; i++){
					count = 0;
					for(j = 1; j <= i; j++){
						if(i % j == 0){
							count++;
						}
					}
						if(count == 2){
						printf("%d\n",i);
					}
			}
				
		
	
}
