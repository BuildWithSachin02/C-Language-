#include<stdio.h>
/*
	5. wap to find minimum value from array.
*/
int main(){
	int i,j;
	int a[5] = {1,2,3,4,5};
	int min = a[0];
	
	for(i=0;i<6;i++){
		for(j=i;j<6;j++){
			if(a[i]< min){
				min = a[i];
			}
		}
	}
	printf("minimum value: %d",min);
}
