#include<stdio.h>
void main (){
// 11
// 12 13
// 14 15 16
// 17 18 19 20
 
 int i,j;
	int num=11;
	for(i=1;i<=4;i++){
	
		for(j=1;j<=i;j++) {
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}

}	
 
