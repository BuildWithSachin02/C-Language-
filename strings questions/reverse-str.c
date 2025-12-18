#include<stdio.h>
/*
Q.2
	Write a program to reverse a string without using string functions.
*/
int main(){
	int i,j;
	char temp;
	char str[100];
	//find a string of length.
	printf("enter the name: ");
	gets(str);
//	for(i=0; i<str[i]!='\0'; i++);
//	//abb hme yeh bolna h ki starting aur ending hme index dena h revke liye
//	j = i-1; // last index bta diya hmne  
//	i = 0;// starting index bol diya 
//	while(i<j){
//		temp = str[i];
//		str[i] = str[j];
//		str[j] = temp;
//		i++;
//		j--;
//	}
//	printf("reverse of strings: %s", str);
	
//	int length;
//	length = strrev(str);
//	printf("%s",length);
//	return 0;

	// reverse all strings ex:rupa=>output=> apur
	for(i=0; i<str[i]!='\0'; i++);//length find hmne string ki 
	for(i=i-1;i>=0; i--){
		printf("%c",str[i]);
	}
	
	
	
	
}

