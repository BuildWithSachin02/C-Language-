#include<stdio.h>

/*
	write a program to find if usser enter the uppercase or not (hme  find krna h ki
	usser ne capital me aur small me  likha h ki nhi 
*/

int main(){
	char ch;
	printf("enter the charcter: ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z'){
		printf("this is uppercase.\n");
	}
	else if(ch >= 'a' && ch <= 'z'){
		printf("this is lowercase.\n");
	}
	else{
		printf("Numbers are not valid in this program.\n");
	}
	
}
