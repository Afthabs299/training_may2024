


/* Program to give advice about the temperature
   author : afthab
   date : 23rd may 2024*/


#include<stdio.h>


int  main()
{
	int temp;	/*variables to take input from the user*/

	
	printf("Enter the temperature : \n");
	scanf("%d",&temp);


	if(temp>30)
	{
		printf("Its hot outside, Stay hydrated\n ");
	}
	else if(temp>=20 &&  temp<=30)
	{

		printf("The weather is nice and warm\n");
	}
	else if(temp>=10 && temp<=19)
	{
		printf("Its bit chilly , wear a jakcet \n");
	}
	else if(temp<10)
	{
		printf("ITs cold outside stay warm\n");
	}
	else
		printf("Invalid temperature\n");
	

	printf("\n");
	return 0;

}

