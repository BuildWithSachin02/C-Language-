#include<stdio.h>
/*
	ind-bix Q.19:=>
		Look at this series: 8, 6, 9, 23, 87 , ... What number should come next?
		issme pehle number  
		1.8 se start hoga aur 
		2.  8*1 = 8-2 => 6
		3.  6*2 =12-3 => 9
		4. 9*3 = 27-4 => 23
		5. 23*4 = 92-5 => 87
		6. 87*5 = 429
		issme mujhe abb ek logic smj aa rha jese hmne pehle wle question me kiya thaa 
		ek toh 123456 yeh wal loop aur ek loop aur add krna 
		add = +1 jise kyy hoga yeh increase ho ta rhegaa 
		| Term No (i) | Previous | Formula  | Result  |
		| ----------- | -------- | -------- | ------- |
		| 1           | 8        | start    | 8       |
		| 2           | 8        | 8×1 – 2  | 6       |
		| 3           | 6        | 6×2 – 3  | 9       |
		| 4           | 9        | 9×3 – 4  | 23      |
		| 5           | 23       | 23×4 – 5 | 87      |
		| 6           | 87       | 87×5 – 6 | **429** |
		// step 1. 8
							//step 2. x = 8*1-2=6
							//3. x=6*2=12-3=9
							//4. x=9*3=27-4=23

*/
int main(){
	int x = 8;						
	int i;
//		for(i = 1; i <= 6; i++){
//			printf("%d\n",x);
//			x = x*i-(i+1); 
//		}
	
//		do-while
//	do{
//			printf("%d\n",x);
//			x = x*i-(i+1); 
//			i++;
//	}while(i <= 6);

//	while
	while(i <= 6){
		printf("%d\n",x);
			x = x*i-(i+1); 
			i++;
	}
}
