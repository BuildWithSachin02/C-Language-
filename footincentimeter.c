#include<stdio.h>
#include<conio.h>

/*
me abhi ek program bna rha huu jise user apna height input daale 
output me usse apne height kaa foot-cm(convert) krrna h. 
*/
/* formula- height_cm=(feet*30.48)+(inches*2.54)
	agr user ki height=5 feet 7 inches 
	1 feet=30.48cm(qki hme  feet ko cm me convert krwana h)
	1 inches=2.54cm(same jese feet me likhaa h )
*/
void main(){
	int feet,inches;
	float height_cm;
	printf("enter your height(feet): ");
	scanf("%d",&feet);
	printf("enter your height(inches): ");
	scanf("%d",&inches);
	height_cm=(feet*30.48)+(inches*2.54);
	printf("your height in cm:%.2f cm\n",height_cm);
	
	
	
	
	
	
	
	
	
	
}
