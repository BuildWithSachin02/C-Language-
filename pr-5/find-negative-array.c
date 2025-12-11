#include<stdio.h>
/*
q.1 devlop a program to the finas all program negative elements given
	from 1D array.
*/
int main(){
	int n;
	int i,j;
	int count = 0;
	//step.1 input by user of size of array
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n]; // iske ander array ki size declare hogi
	
	//step.2 abb hmne array lena h 
	printf("enter the array values: [%d]",n);
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	//step.3 finds the negative aarrays
	printf("Negative Array in the function:\n");
	for(i=0; i<n; i++){
		if(arr[i]<0){
			
			printf("%d",arr[i]);
		}else{
			count++;
			printf("in this array have [%d] negative elements",count);
		}
	}
	return 0;
	
	
	
}
