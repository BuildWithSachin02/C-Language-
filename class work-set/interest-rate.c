#include<stdio.h>

// wap find simple interest where is p principal amount r is the rate and n is 
// time a month.
// formulla interest = p*r*n/100
int main(){
	float p = 100;   // p = principal amount
	float r = 8;     // r = rate 
	float n = 12;     // n = month
		float interest = (p*r*n)/100;
			printf("%.2f",interest); 
}
