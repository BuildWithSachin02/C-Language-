#include<stdio.h>
/*
	5 number of maximum.
	a,b,c,d,e we have two teams a,b
	a = a>b,a>c,a>d,a>e;
	b = b>c,b>d,b>e,;
	c = c>d, c>e;
	d = d>e;
*/

int main(){
	int a,b,c,d,e;
	printf("enter the number: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a == b && b == c && c== d && d == e){
		printf("all numbers are equals.");
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						printf("%d is max",a);
					}else{
						printf("%d is max",e);
					}
				}else{
					if(d>e){
						printf("%d is max",d);
					}else{
						printf("%d is max",e);
					}
				}
			}else{
				if(c>d){
					if(c>e){
						printf("%d is max",c);
					}else{
						printf("%d is max",e);
					}
				}else{
					if(d>e){
						printf("%d is max",d);
					}else{
						printf("%d is max",e);
					}
				}
			}
		}
		/* b = b>c,b>d,b>e,c>d,c>e, d>e */
		else{
			if(b>c){
				if(b>d){
					if(b>e){
						printf("%d is max",b);
					}else{
						printf("%d is max",e);
					}
				}else{
					if(d>e){
						printf("%d is max",d);
					}else{
						printf("%d is max",e);
					}
				}
			}else{
				if(c>d){
					if(c>e){
						printf("%d is max",c);
					}else{
						printf("%d is max",e);
					}
				}else{
					if(d>e){
						printf("%d is max",d);
					}else{
						printf("%d is max",e);
					}
				}
			}
		}
	}
}
