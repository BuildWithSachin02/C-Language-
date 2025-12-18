#include<stdio.h>
/*
Write a program to convert a string to uppercase and lowercase.
*/
int main(){
	int i;
	char str[100];
	
	//user input
	printf("enter the Uppercase/Lowercase string: ");
	gets(str);
	// find length
	for(i=0; i<str[i]!='\0'; i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] = str[i]+32; //lowercase me hmne add kr diya 
		}
		else if(str[i]>='a' && str[i]<='z'){
			str[i] = str[i]-32;// lower into upper
		}
	}
	printf("your lowercase %s",str);
}
