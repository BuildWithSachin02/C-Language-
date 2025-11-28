#include<stdio.h>
/*
	wap to update value of array by user input.
	enter position to update: 2
	// enter value: 34
	// a[p] = value;
	
	//[1,4,2,3,6] --> [1,2,3,4,6],[6,4,3,2,1]
*/
int main(){
	int i,n,p;
	int a[5] = {1,2,3,4,5};
	
	printf("array before update:\n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	// giving position update
	printf("\n");
	printf("enter the position to change (0-4): ");
	scanf("%d",&p);
	if(p<0 || p>4){
		printf("invalid position.");
	}
	
	printf("enter the value to change: ");
	scanf("%d",&n);
	p[a] = n; // ise dene se compiler ko hmne bola ki a[p ke andeer yeh position h voh check kre ki iss position pe konsi value update krni h] = n yeh hmra updated value h
	
	// after update
	printf("\n after update");
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
	
	
	
}
