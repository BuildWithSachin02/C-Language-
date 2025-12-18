#include<stdio.h>
/*
Write a program to find frequency of each character in a string.
*/
int main(){
	int i;
	char str[200];
	char freq[256] = {0};// yeh pure ascii ki value h sare aa gye isse
	
	//user input
	printf("enter the strings: ");
	gets(str);
	//find aa length of string
	for(i=0; i<str[i]!='\0'; i++){
		freq[str[i]]++;//isshmne freq ki array bnaya thaa pehle abb yeh loop ke sath i+++ ki tarah plus hogaa yeh 
	}
	printf("\nFrequency Charcter\n");
	for(i=0; i<256; i++){
		if(freq[i]!=0){//abb hme single wle char ko print nhi krna h toh hmne bol diya freq[i]!=0 toh yeh keh rhaa h ki 
			printf("%c = %d\n", i, freq[i]);
		}
	}
	
}
