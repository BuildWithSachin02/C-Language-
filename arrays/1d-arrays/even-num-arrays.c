#include<stdio.h>
/*
arrays:-
	wap to print only even numbers arrays
*/
int main(){
	int i;
	int a[5]={1,2,3,4,5};
	
	for( i=0;i<5;i++){
		if(a[i]%2==0){
			printf("%d\n",a[i]);
		}
	}
}
