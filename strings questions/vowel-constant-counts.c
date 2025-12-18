#include<stdio.h>
/*
Write a program to count vowels and consonants in a string.
*/
int main(){
	int i,j;
	int vowel = 0, constant = 0;
	char str[100];
	
	// user input 
	printf("enter the string: ");
	gets(str);
	
	//length find kro string ki 
	for(i=0; i<str[i]!='\0'; i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			vowel++;
		}
/*
ASCII values for alphabets use consecutive numbers: Uppercase letters 
('A'-'Z') range from 65 to 90, while lowercase letters ('a'-'z') range
 from 97 to 122, with a consistent difference of 32 between uppercase 
 and lowercase for the same letter (e.g., 'A' is 65, 'a' is 97). 
*/
//isliye hmne small a ki value=>97 hoti aur z=small ki value=>122 hoti
//isliye hmne yeh bola h ki str[i]>=97&& str[i]<=122 
//vese hii capital ke liye 
		else if((str[i]>='a' && str[i]<='z')||
		(str[i]>='A'&&str[i]<='Z')){
			constant++;
		}
	}
	printf("Vowels: %d\n",vowel);
	printf("Constant: %d",constant);
	return 0;
}
