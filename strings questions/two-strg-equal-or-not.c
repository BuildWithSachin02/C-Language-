#include<stdio.h>
/*
Write a program to compare two strings without using strcmp().
*/
int main(){
	int i,j;
	char str1[100],str2[100];
	int equal = 0;
	int result;
	//user input
	printf("enter the 1:strings: ");
	gets(str1);
	printf("enter the 2:strings: ");
	gets(str2);
	result = strcmp(str1,str2);
	//find length
//	for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++){
//		if(str1[i]!=str2[i]){
//			equal = 1;
//			break;	
//		}
//	}
	if(result==0){
		printf("both are eqauls",equal);
	}else{
		printf("not eqauls");
	}
//	if(equal==0){
//		printf("both are eqauls",equal);
//	}else{
//		printf("not eqauls");
//	}
	return 0;
}
