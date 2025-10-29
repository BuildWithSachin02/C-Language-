#include<stdio.h>
#include<conio.h>

/*
chatgpt-questions:-
	Write a program to check if a person is eligible to vote (age = 18).
*/
int main (){
	int age;
	printf("please enter your current age: ");
	scanf("%d",&age);
	if(age >= 18){
		printf("yes you are eligible for vote. %d\n",age);
	}
	else{
		printf("you are not eligible for vote bcz your age is under age. %d\n",age);
	}
}
