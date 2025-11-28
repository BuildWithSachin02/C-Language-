#include<stdio.h>
/*
	8. wap to check given value is exist in array or not.
    
*/
int main(){
	int i,search;
	int a[5] = {1,2,3,4,5};
	int found = 1; // issme 1 store krne mtlb yeh h ki hme 1 value mil gyaa h agr 0 store krete toh hme me kuch nhi milta
	printf("check array if axited or not: ");
	scanf("%d",&search);
	for(i=0;i<5;i++){
		if(a[i] == search){
			found = 1;
			break;
		}
	}
	if(found == 1){
		printf("value found %d in array.",search);
	}else{
		printf("not found in aaray %d",search);
	}
}
