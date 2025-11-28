#include<stdio.h>
/*
	6. wap to find second max value from array.
*/
int main(){
	int i,j;
	int a[5] = {11,23,453,334,343};
	int max1,max2;
	max1 = max2 = a[0]; 
	for(i=0;i<5;i++){
		if(a[i]>max1){
			max2 = max1;// aab hmne iske pehle bhi swap wala formulla use kiya same logic h 
			max1 = a[i];
		}else if(a[i]>max2 && a[i] != max1){
			max2 = a[i];
		}
	}
	printf("second max value: %d",max2);
		
}
