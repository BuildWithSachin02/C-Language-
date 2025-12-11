#include<stdio.h>
/*
Q.2
	devlop a progrma to find the largest element from a given 2d array.
*/
int main(){
	int row,col;
	int i,j;
	//step.1 take a array by usser to size of array:row
	printf("enter the size of row: ");
	scanf("%d",&row);
	
	//step.2 take a col
	printf("enter the size of col: ");
	scanf("%d",&col);
	
	int arr[row][col];
	//abb mujhe loop ke ander user se input lena h uski value i aur j ki 
	printf("enter the element:[%d]\n",row*col);
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//now final step abb hume result dena h 
	int largest = arr[0][0];
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(arr[i][j]>largest){
				largest = arr[i][j];
			}
		}
	}
	//final step printf the largest array
	printf("the largest array of in this array: %d",largest);
}
