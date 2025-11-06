#include<stdio.h>
/*
	write a program to calculate sum of natural numbers and print them and 
	reverse them .
*/
int main(){
	int n, i, sum = 0;
	printf("enter the any numbers: ");
	scanf("%d",&n);
	
	 for (i = 1, j = n; i <= n && j >= 1; i++, j--) {
        sum = sum + i;
        printf("i = %d, j = %d, sum = %d\n", i, j, sum);
    }
	printf("\n final sum of first natural numbers is %d:\n",n,sum);
	return 0;
}
