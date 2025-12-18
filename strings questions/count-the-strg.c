#include<stdio.h>
/*
Write a program to count words in a given string.
*/
int main(){
	int i,j;
	char str[100];
	int count = 0;
	int words = 1;// qki input krega hme 1 se start krnege 1 toh word hohii isliye hme pehle hii count kr liya usse
	
////	//user input
////	//yeh program sirf char aur string aur space bhi count kregaa but 
////	// word count krnaa isme 
	printf("enter the any thing: ");
	gets(str);
////	//find length
////	for(i=0; i<str[i]!='\0'; i++){
////		count++;
////	}
//	printf("total of string is: %d",count);

	// find a length of string
	for(i=0; i<str[i]!='\0'; i++){
		if(str[i]==' ' && str[i+1]!=' '&& str[i+1]!='\0'){
			words++;
		}
	}
	printf("total words in statement: %d",words);
	return 0;
	/*
   Word counting logic:

   A new word starts only when we cross a SPACE and the 
   next character is a valid letter. Therefore we check:

   1) str[i] == ' '
      - This means we found a space.
      - A space indicates the previous word has ended.

   2) str[i+1] != ' '
      - The character after the space must NOT be a space.
      - This avoids counting multiple continuous spaces as multiple words.

   3) str[i+1] != '\0'
      - The next character must not be the end of the string.
      - If a space comes at the end, we should not count a new word.

   When all three conditions are true at the same time,
   it means a NEW word is starting right after that space.
   Therefore, we increase the word count (words++).
*/

		
}
