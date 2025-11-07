#include<stdio.h>
	/* hmme abcd ko compare krna h iss type ke problem ko hme 
	comapire me krke ko solve krnawana h pehle toh hme 
	A = a>b, a>c, a>d, c>d. innka yeh A branches h 
	B = b>c, b>d, c>d b ke braches h */ 
int main(){
	int a,b,c,d;
	printf("enter the numbers.");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a == b && b == c && c == d){
		printf("all values are same.",a,b,c,d);
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					printf("%d is max",a);
				}else{
					printf("%d is max",d);
				}
			}else{
				if(c>d){
					printf("%d is max",c);
				}else{
					printf("%d is max",d);
				}
			}
		}
		else{
			if(b>c){
				if(b>d){
					printf("%d is max",b);
				}else{
					printf("%d is max",d);
				}
			}else{
				if(c>d){
					printf("%d is max",c);
				}else{
					printf("%d is max",d);
				}
			}
		}
	}
	
}
