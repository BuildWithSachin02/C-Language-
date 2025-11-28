#include<stdio.h>
/*
	10. wap to find value on given index.
*/
int main(){
	int index;
	int a[5] = {1,2,3,4,5};
		printf("enter the index(0-4): ");
		scanf("%d",&index);
		
		if(index<0 || index>4){
			printf("invalid input");
		}else{
			printf("the value of index:%d, is %d",index,a[index]);
		}
		return 0;
	
}
