
#include<stdio.h>


int  main()
{
	float temp;
	float far;   /*variable for fahrenheit*/

	printf("Enter the tempature in celcius :  ");
	scanf("%f",&temp);

	far = ((temp*9)/5)+32;

	printf("temperature in fahrenheit :%f ",far);

	printf("\n");

	return 0;

}

