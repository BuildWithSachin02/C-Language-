#include<stdio.h>

/*
	Write a program calculate grade based on student percentage of 5 subjects.
*/
	/*
		total subject = 5
		per sub marks(5*100)= 500
		compaire me total ke sath krana 
		per % pe comapire 
		35-56% = d
		56-70% = c
		70-80% = b
		80-90% = a
		90-100% = a+
	*/
int main(){
	int a,b,c,d,e,total;
	float avg,per;
	
	printf("enter your 5 subject score: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	total = a+b+c+d+e;
	avg = total/5.0;
	per = (total/500.0)*100;
	printf("\n");
	printf("\n");
	printf("=======================================\n");
	printf("Marks Summary.\n");
	printf("=======================================\n");
	printf("Total marks    : %d /500\n",total);
	printf("Average        : %.2f%%\n",avg);
	printf("Percentage     :%.2f%%\n",per);
	
	
	
	
	//*per<35*//
	if(per<35){
		printf("Grade           : FAIL\n");	
	}
	else if(per>=35 && per<=56){
		printf("Grade           : D\n");
	}
	else if(per>56 && per<=70){
		printf("Grade           : C\n");
	}
	else if(per>70 && per<=80){
		printf("Grade           : B\n");
	}
	else if(per>80 && per<=90){
		printf("Grade           : A\n");
	}
	else if(per>90 && per<=100){
		printf("Grade           : A+\n");
	}
	else{
		printf("invalid number you enter.\n");
	}
	printf("=======================================\n");

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	

