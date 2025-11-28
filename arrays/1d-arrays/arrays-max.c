#include<stdio.h>
/*
	4. wap to find maximum value from array.
*/
int main(){
	int i,j;
	int a[6] = {1,2,3,4,5,6};
	int max =  a[0];  // new variable for max value in array
	// max agr koi arrays me koi index ki value badi hoji usse max naa lo
		for(i=0;i<=6;i++){
			for(j=i;j<6;j++){
				if(a[i]>max){
					max = a[i];
				}
			}		
		}
		printf("maximum value: %d",max);
}
//int main(){
//	int i;
//	int a [5] = {1,2,3,4,5};
//	int max1,max2;
//		max1 = max2 = a[0];
//		for(i=0;i<5;i++){
//			if(a[i]>max1){
//				max2 = max1;
//				max1 = a[i];
//			}
//			else if(a[i] > max2 && a[i] != max1){
//				max2 = a[i];
//			}
//		}
//		printf("%d ",max2);
//}
