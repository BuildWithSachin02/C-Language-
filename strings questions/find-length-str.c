#include<stdio.h>
#include<string.h>
/*
Q.1
Write a program to count the length of a string without using strlen().		
*/
int main(){
	char str[100];
	int i,j;
	int count = 0;
//	printf("enter the name: ");
//	gets(str);
//	for(i=0; i<str[i] != '\0'; i++){
//		count++;
//	}
//	printf("the length of string is : %d",count);
	int length;
	printf("enter the strings: ");
	gets(str);
	length = strlen(str);
	printf("the length of strings is: %d",length);
	return 0;	
	
}
