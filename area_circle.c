#include<stdio.h>
#define PI 3.14

int  main()
{
	float radius;
	float area;
	float circumference;	/*intialising the variables */
				
	printf("Enter the radis : ");
	scanf("%f",&radius);

	area= PI*radius*radius;
	circumference = 2*PI*radius;

	printf("Area of circle :%f ",area);
	
	printf("circumference of circle :%f \n ",circumference);
	printf("\n");

	return 0;

}

