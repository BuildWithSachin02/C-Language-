#include<stdio.h>
/*
Write a program to copy one string to another without using strcpy().
*/
int main(){
	int i,j;
	char str1[100],str2[100];
	
	printf("enter any string: ");
	gets(str1);
	
	
	for(i=0; i<str1[i]!='\0'; i++){
		str2[i] = str1[i];   //str1 ki string hmne 2 ke ander store krdiya h
	}
	str2[i] = '\0'; //ending find hmne str2 ki 
	printf("this is your coping string: %s",str2);
}
