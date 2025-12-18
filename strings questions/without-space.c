#include<stdio.h>
/*
Write a program to remove spaces from a string.
*/
int main(){
	int i,j=0;
	char str[200],result[200];
	
	//user input
	printf("Enter the string: ");
	gets(str);
	
	//find length
	for(i=0; i<str[i]!='\0'; i++){
		if(str[i]!= ' '){// abb hum keh rhe bhai mujhewithout space string chhiye ussemen new variable store krnaa use mujhe 
			result[j] = str[i];
			j++;
		}
	}
	result[j] = '\0';//end of new string
	printf("without space: %s",result);
}
