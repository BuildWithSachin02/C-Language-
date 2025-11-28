#include<stdio.h>
/*
	9. wap to find index of given value.
*/
int main(){
	int i,value;
	int a[5] = {1,2,3,4,5};
	int found = 1;
	
	printf("enter the value: ");
	scanf("%d",&value);
	
		for(i=0;i<5;i++){
			if(a[i] == value){
				printf("value found to the index %d\n",i);
				found = 1;
				break;
			}
		}
		if(found == 0){
			printf("yes value is find %d",value);
		}
		return 0;
		
}
