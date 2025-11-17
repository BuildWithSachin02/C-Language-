#include<stdio.h>

//Q.1 Tempreture conveter 
// wap devlop that can convert tempreture from degrees celsius to fahrenheit
// using the formulla = f =(9/5*c)+32;
int main(){
	int c = 12;
	printf("enter the celcius value(ex-5.0): ");
	scanf("%d",&c);
	
	float f = (9.0/5.0*c)+32;
		printf("%.2f",f);
}
