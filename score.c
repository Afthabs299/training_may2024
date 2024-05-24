

/* Program to determine the grade
   author : afthab
   date : 23rd may 2024*/


#include<stdio.h>


int  main()
{
	int marks;	/*variables to take input from the user*/

	
	printf("Enter the marks of the student : \n");
	scanf("%d",&marks);


	if(marks>100||marks<0)
	{
		printf("Wrong entry, Please enter the marks between 0 to 100 ");
	}
	else if(marks>=90 &&  marks <=100)
	{

		printf("Grade : A\n");
	}
	else if(marks>=80 &&  marks <=89)
	{
		printf("Grade B\n");
	}
	
	else if(marks>=70 &&  marks <=79)
	{
		printf("Grade C\n");
	}
	
	else if(marks>=60 && marks <=69)
	{
		printf("Grade D\n");
	}
	else{
		printf("Fail");
	}
	



	printf("\n");
	
	return 0;

}

