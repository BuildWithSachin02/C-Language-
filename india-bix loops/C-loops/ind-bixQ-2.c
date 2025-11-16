#include<stdio.h>

/*
	india bix Q.2
		Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?
	(for loop)
*/
//int main(){
//	int num = 7;
//	int i;
//	printf("Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?\n");	
//	
//	for(i = 1; i <= 7; i++){
//		printf("%d\n",num);
//		
//		if(i % 2 == 1){
//			num = num +3; /*issme iska mtlb yeh ki odd number hmber 7 start hoga toh ab hume usse 
//							ussme +3 krna h even nunber me -2 krna h yeh iss tarah ke logic se 
//							set hoga */					
//		}else{
//			num = num-2; //odd number me hmene -2 kiya simple logic set kiya h
//		}
//		
//	}
//	return 0;
//}

//do-while

//int main(){
//	int num = 7;
//	int i;
//		printf("Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?\n");	
//	do{
//		printf("%d\n",num);
//		if(i % 2 == 1){
//			num = num+3;
//		}else{
//			num = num -2;
//		}
//		i++;
//	}while(i <= 7);
//	return 0;	
//}


//while loop


int main(){
	int num = 7;
	int i;
	
	printf("1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?\n");
    printf("\n");
   	while(i <= 7){
   		printf("%d\n",num);
   		if(i % 2 == 1){
   			num = num +3;
		   }else{
		   	num = num -2;
		   }
		   i++;
	   }	
}
