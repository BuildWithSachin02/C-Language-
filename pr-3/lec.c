#include<stdio.h>

void main()
{
	// array - collection of multiple values of same datatype.
	// array static
	
//	int a[5];
//	a[0] = 10;
//	a[1] = 2;
//	a[2] = 30;
//	a[3] = 4;
//	a[4] = 50;

	int n,sum=0;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]: ",i); // Enter a[3]: 
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	// wap to print only even numbers
	
//	for(i=0; i<n; i++)
//	{
//		if(a[i]%2==0)
//		{
//			printf("%d ",a[i]);
//		}
//	}

	// wap to print array in reverse order.
	// wap to find sum of all elements of array.
	
//	for(i=n-1; i>=0; i--)
//	{
//		sum = sum + a[i];
//	}
//	printf("sum of array : %d",sum);

	// 	
	

}

