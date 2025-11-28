#include<stdio.h>
/*
	 7. wap to find second min value from array.
*/
int main(){
	int i;
	int a[5] = {7,3,4,5,6};
	int min1,min2;
	min1 = min2 = a[0];
	for(i=0;i<5;i++){
		if(a[i]<min1){
			min2 = min1;
			min1 = a[i];
		}else if(a[i]<min2 && a[i] != min1){
			min2 = a[i];
		}
	}
	printf("second value of min: %d",min2);
}
