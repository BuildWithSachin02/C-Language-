#include<stdio.h>
/*
Q.1
	devlop a program to print a to z and skiping 3 alphbets o,l,j
*/
int main(){
	char a = 'a';
	while(a<='z'){
		
//		skip i,j,k
		if(a == 'i' || a == 'j' || a == 'k'){
//			a++;
			continue;
		}
		printf("%c\n",a);
		a++;
	}
}
