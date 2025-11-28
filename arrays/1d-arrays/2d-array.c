#include<stdio.h>
/*
 2d-array
*/
int main(){
	int i,j;
	int r,c;
	printf("enter the array of size: ");
	scanf("%d",&r);
	printf("enter the array of  col:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
