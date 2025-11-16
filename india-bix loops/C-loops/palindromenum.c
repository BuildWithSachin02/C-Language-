#include<stdio.h>
/*
// wap to check numbers is palidrome or not
        // iss program me palindrome check krna h means ex.121 isko reverse krne ke baad 
        // bhi 121 ayega ese numbers ko hum palindrome numbers bolte h 
        // abb hme ese program bna hoga jise find kre ki yeh number palidrome h ki nhi
        // iss hme jarurat padegi 
        // original number iske ander hum num store krenge qki hmra number safe rhe taki last 
        // hme usse  ke sath comapire krna h qki loop me numbers change hota rehta h isliye
        // aurr issme hme need a digit variable aur reverse variable jise numbers
        // ke baad reverse hone baad compaire kr ske ori=reverse ke sath.
        // Jab decimal aa jata hai ? used math.floor(xyz);
        // loop kabhi sahi reverse number nahi banata,
        // isliye output "not palindrome" aa raha hai.
*/
int main(){
	int num,original,digit,reverse = 0;
	
		
		printf("enter the any numbers: ");
		scanf("%d",&num);
		 original = num;
		while(num>0){
			digit = num % 10;
			reverse = reverse*10+digit;
			num = num/10;
		}
		if( original == reverse){
			printf("%d is palindrome numbers.",original);
		}else{
			printf("this is not palindrome numbers.",original);
		}
}
