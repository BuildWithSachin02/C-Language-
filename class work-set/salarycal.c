#include<stdio.h>
//Q.2 gross salary calculator 
// wap that can calculate the gross salary by adding  percentages of 
// HRA = 10% , DA = 5% ,TA = 8%, to the baase salary as choosen by the  usser.
int main(){
	float base,hra,da,ta,salary;
	printf("enter your base salary: ");
	scanf("%f",&base);
	
	hra = base*0.10;
	da = base*0.05;
	ta = base*0.08;
	
	salary = base+hra+da+ta;
	printf("this is your salary: %f",salary);
	
	
	
}
