



/* Program to Claculate body mass and index(BMI)
   author : afthab
   date : 24rd may 2024*/


#include<stdio.h>


int  main()
{
	float  weight,height,bmi;	/*variables to take input from the user*/

	
	printf("Enter the weight in kgs : \n");
	scanf("%f",&weight);


	printf("Enter the height in feet : \n");
	scanf("%f",&height);
	
	height = height/3.21;

	bmi=weight/(height*height);


	if(bmi<18.5)
	{
		printf("Under weight\n ");
	}
	else if(bmi>=18.5 && bmi<= 24.9)
	{

		printf("Normal weight\n");
	}
	else if(bmi>=25 && bmi<=29.9)
	{
		printf("Over weight\n");
	}
	else if(bmi>30)
	{
		printf("Obesity\n");
	}

	

	printf("\n");
	return 0;

}

