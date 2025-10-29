#include<stdio.h>
#include<conio.h>

/*loop hme chlwana h reverse me 100-1 print krwna h */

int main(){
	int i;
	printf("if you want print a number to 1 to 100. : ");
	scanf("%d",&i);
	
	for(i = 100; i >=1; i--){
		printf("%d\n",i);
	}
}
