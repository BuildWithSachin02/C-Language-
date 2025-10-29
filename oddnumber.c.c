#include<stdio.h>
#include<conio.h>

/*
abb hme odd numbers print krwana h 1 to 100;
*/
int main(){
	int i;
	printf("enter the even number: ");
	scanf("%d",&i);
	
	for(i = 1; i<=100; i++){
		if(i % 2 != 0){
			printf("%d\n",i);
		}
	}
}
