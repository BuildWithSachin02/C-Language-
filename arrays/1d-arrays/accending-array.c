#include<stdio.h>
/*
	2. wap to sort array in acending order.
*/
int main(){
	int i,j;
	int temp;//swap 
	int a[5] = {5,4,2,1,3};
	for(i=0;i<5;i++){
		for(j=i;j<=5;j++){
			if(a[i]>a[j]){
				temp = a[i];// swap kew liye hme ek new variable need hoga isliye hmne new variable liya h 
				a[i] = a[j];// qki mujhe a aur b ko ender ke pani check krna hoga ki kisme sabse jyada pani h isliye
				a[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
