#include<stdio.h>
/*
	ind-bix Q.5 :=>
	   5. Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?
	   x = x - 13; issme repet number kese ayegaa 
	   x ke ander hmne 53 store kiya h toh hme aur hmne condition di hui ki i%2==0 => even num h 
	   toh abhi hme abb loop me i ki value kyy h 1 toh abhi hme loop lgya h toh start toh 53 se 
	   hoga toh 1 ko % krenge 2 se uska reminder 0 ana chhiye tab -13 hoga esa h 
	   i%2==0;
	   1 odd number h yeh 1 % 53 =  aur yeh odd number h 53 , 53 is odd number toh repeat h  
	   2 even % 2 = 0 aya h iska reminder zero h = 53,53 repeat kiya h 
	   3 odd % 2 = 1  
	   short me bolu toh 
	   1(odd) - 53 start - no changes = 53
	   2(even) - 0 53 print kiya abb challange yeh ki even number mile ussme -13 karo 53-13=40 yeh hoga 3 number pe print hoga
	   3(odd) - 1 40 mila 2 line hme 40 mila h toh 3 re pe 40 print krenge 
	   4(even) 0 40 print krega compiler fir abb jab hme even number mila h toh 40-13 krnege aage ka next number milega 
	   5(odd) 1 27 as it print hoga 
	   6(even) 0 27 print hua but abb isme -13 krengge next number milega hme 27-13
	   7(odd)  14 mila abb yeh 7 odd h toh as it print hoga 
	   8(even) 0 14
	    
*/
int main(){
	int x = 53;
	int i = 1;
	// for loop
//	for(i = 1; i <= 7; i++){
//		printf("%d\n",x);
//		if(i % 2 == 0){
//			x = x - 13;
//		}
//	}
	
	//do-while
//	do{
//		printf("%d\n",x);
//		if(i % 2 == 0){
//			x = x - 13;
//		}
//		i++;
//	}while(i <= 7);
	
	//while loop
	while(i <= 7){
		printf("%d\n",x);
		if(i % 2 == 0){
			x = x - 13;
		}
		i++;
	}


















}
