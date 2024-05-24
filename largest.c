
/* Program to find the largest of three numbers
   author : afthab
   date : 23rd may 2024*/


#include<stdio.h>


int  main()
{
	int num1,num2,num3;	/*variables to take input from the user*/

	
	printf("Enter three numbers : \n");
	scanf("%d%d%d",&num1,&num2,&num3);


	if((num1>num2) && (num1>num3))
	{
		printf("Num1 is largest : %d ",num1);
	}
	else if(num2>num3)

		
		printf("Num2 is largest :%d ",num2);
	else

		printf("Num3 is largest : %d ",num3);
	



	printf("\n");
	
	return 0;

}

