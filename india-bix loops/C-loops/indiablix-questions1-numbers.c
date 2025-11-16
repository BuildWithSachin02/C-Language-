#include <stdio.h>
/*
	india-bix Q.1=>
		1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?   
		(for loop)
*/
//int main() {
//   int i;
//   int num = 1;
//   printf("1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?\n");
//   printf("\n");
//   for(i = 1; i <= 5; i++){
//   	if(i == 1)
//   		printf("2\n");
//	   
//	   else if(i == 2)
//	   	printf("1\n");
//	   
//	   else{
//	   		num = num*2;
//	   		printf("1/%d\n",num);
//	   } 
//   }
//}

// while loop
//int main(){
//	int i = 1;
//	int num = 1;
//	
//   printf("1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?\n");
//   printf("\n");
//   
//   while(i <= 5){
//   	if(i == 1){
//   		printf("2\n");
//	   }
//	   else if(i == 2){
//	   	printf("1\n");
//	   }
//	   else{
//	   		num = num*2;
//	   		printf("1/%d\n",num);
//	   }
//	   i++;
//   }
//   return 0;

// do-while loop
int main(){
	int i = 1;
	int num = 1;
	
   printf("1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?\n");
   printf("\n");
   
   do{
   	if(i == 1){
   		printf("2\n");
	   }
	   else if(i == 2){
	   	printf("1\n");
	   }
	   else{
	   	num = num*2;
	   	printf("1/%d\n",num);
	   }
	   i++;
   }
   while(i <= 5);
   return 0;
}
   


