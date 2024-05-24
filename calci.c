




/* Program to make a calculator
   author : afthab
   date : 24rd may 2024*/


#include<stdio.h>


int  main()
{
	double num1,num2,res;	/*variables to take input from the user*/
	char op;
	
	printf("Enter two numbers : \n");
	scanf("%lf%lf",&num1,&num2);


	printf("Enter the operator '+', '-', '*', '/' :  \n");
	scanf("%c",&op);
	
	switch(op)
	{
		case +: 
			res = num1+num2;
		 	printf("Addition of two numbers is : %lf",res);
 			break;

		case -:
		       	res = num2-num2;

		 	printf("Subtraction of two numbers is : %lf",res);
 			break;

 
		case *: 
			res = num1*num2;
				
			printf("Multiplicaton of two numbers is : %lf",res);
			break;

		case /: 
			res=num1/num2;
			printf("Addition of two numbers is : %lf",res);
			break;
		default:
			printf("Invalid operator");

	} 			  
 			  
			 
	return 0;

}

