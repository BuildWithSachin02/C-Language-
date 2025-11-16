#include<stdio.h>
/*
	ind-bix Q.14=>
		Look at this series: 201, 202, 204, 207, ... What number should come next?
		issme hme yeh dekhna h ki 201,202,204,207 iss ek ek +1 ho rha h 
		x = 201 + 1= 202, abb add ke ander add = add+1 = 2;
		x = 202 + 2 = 204 ,add = 2+1 = 3
		x =204 +3 = 207 add = 3+1(add=1)
		x = 207 +4 = 211 , add = 4(3+1)+1
		x = 211+5 = 216 
*/
int main(){
	int x = 201;
	int add = 1;
	int i = 1;
	
//	for(i = 1; i <= 5; i++){
//		printf("%d\n",x);
//		x = x + add; // 201 + 1 = 202, 
//		add = add + 1; // issme yeh sabse main line issi se gadi chl rhi h 
//	}

//	do-while
//	do{
//		printf("%d\n",x);
//		x = x + add; // 201 + 1 = 202, 
//		add = add + 1; // issme yeh sabse main line issi se gadi chl rhi h 
//		i++;
//	}while(i <= 5);

//	while
	while(i <= 5){
		printf("%d\n",x);
		x = x + add; // 201 + 1 = 202, 
		add = add + 1; // issme yeh sabse main line issi se gadi chl rhi h 
		i++;
	}
}
