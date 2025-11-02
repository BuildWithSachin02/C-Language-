#include<stdio.h>

/*
	write a program  to check if a given  number is Armstorng  number or not.
	armstrong:-
		Armstrong number (jise Narcissistic number bhi bolte hain) ek aisa 
		number hota hai jiska har digit ka power (digits ki total count ke equal)
		 lekar sum karein, aur woh sum number ke equal ho jaye.
		 Simple Definition
			A number is Armstrong if:
			Sum of each digit raised to the power of total digits = original number
		Example 1.:-
			153, total digits=3 then, 
				1³ + 5³ + 3³
				= 1 + 125 + 27
				= 153 (Har digit ka cube add kro ? result same number aaye)
		Example 2.:-
				Not Armstrong Example: 123
				Digits = 3
				1³ + 2³ + 3³
				= 1 + 8 + 27
				= 36  (not equal to 123)=>mtlb iska 
					=>Har digit ka cube add kro ? result same number aaye but iss 
					example me number 123 jiska total same nhi 36 != 123 isliye 
					yeh armstrong number nhi h 
		 Short Answer:-
			sum = 0 matlab:
			Start fresh, clean slate
			 /*original bna ke rkhega temp/*
		Word						Meaning								Example
		num							user ka number						153
		temp						duplicate copy store karne ke liye	153 (backup)
		digit						ek-ek digit store					1, then 5, then 3
		sum							cube ka total save karega			153 result milega	 							
*/
int main(){
	int num,temp,digit,sum=0;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	temp=num; 
	 
	while(temp>0){
		digit = temp % 10;  // last digit nikaalna
		sum = sum+(digit*digit*digit);// digit^3 add karna
		temp = temp/10; // last digit remove karna
	}
	if(num == sum){
		printf("%d is armstrong number",num);
	}
	else{
		printf("%d is NOT an Armstrong number", num);
	}
	return 0;
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
}




















