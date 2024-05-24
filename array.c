/* Array program
   Author : Afthab
   24th may 2024*/



#include<stdio.h>
#include<stdlib.h>

int main()
{

	int size,i;

	printf("Enter the size of an array");
	scanf("%d",&size);
	
	int a[size];

	for(i=0;i<size;++i)
	{
		printf("Enteer the elements of an array of size %d : ",size);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;++i)
	{
		
		printf("%d \t ",a[i]);
	}

	for(i=size-1;i>=0;i--)
	{
		printf("reverse elements are :");
		printf("%d \n \t",a[i]);
	}
	printf("\n \n");
	return EXIT_SUCCESS;

}

