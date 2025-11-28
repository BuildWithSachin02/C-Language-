#include<stdio.h>
/*
	3. wap to sort array in decending order.
*/
int main(){
	int i,j;
	int temp;
	int a[5] ={1,2,3,4,5};
		for(i=0; i<5;i++){
			for(j=i;j<5;j++){
				if(a[i]<a[j]){ //Agar a[i] chhota hai a[j] se,Toh swap karo,Yani badi value ko aage le aao
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(i=0;i<5;i++){
			printf("%d ",a[i]);
		}
		return 0;
}
