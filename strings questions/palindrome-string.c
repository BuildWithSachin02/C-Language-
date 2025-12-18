#include<stdio.h>
/*
Q.3
Write a program to check whether a string is palindrome or not.
*/
int main(){
	int i,j;
	char str[100];
	char flag = 0;
	
	//user input
	printf("enter the string: ");
	gets(str);
	
	//step.2 find a length of string
//	for(i=0; i<str[i]!='\0'; i++);
//	
//	// abb mujhe pehle index aur last index find krnaa h 
//	i = 0;
//	j = i-1;
//	while(i<j){
//		if(str[i] != str[j]){
//			flag = 1;
//			break;
//		}
//		i++;
//		j--;
//	}
	
	
	
	if(flag == 0){
		printf("palindrome string");
	}else{
		printf("not palindrome string");
	}
}
