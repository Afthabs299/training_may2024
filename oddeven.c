/* Program to find the number is even or odd
   author : afthab
   date : 23rd may 2024*/


#include<stdio.h>


int  main()
{
	int num;	/*variable to take input from the user*/
	char ch;
	
	printf("Enter the number : ");
	scanf("%d",&num);


	if(num%2==0)
	{
		printf("The given number is even ");
	}
	else
		printf("the number is odd");



	printf("\n");
	
	return 0;

}

