/* Programme to use loop to use power */
#include <stdio.h>

int power(int,int); // declaration of function power with arguments integer
int main()
{
   int num,result,pow;

   printf("Enter a number:\n");
   scanf("%d",&num);

   printf("Enter the power:\n");
   scanf("%d",&pow);
   
   result=power(num,pow); // passing variable num and pow to function power() and giving value to result

   printf("The result is %d\n",result); // Here result has the value passed from power() 
   return(0);
}

int power(int num,int pow) // x and y are dummy variable holding value of num and pow passed from main function
{
   int i,result;

   result=1;
   for(i=1;i<=pow;i++)
   {
      result=result*num; // Here ans i.e 1 will be multiplied to x i.e number on the times of y i.e pow from main function
   }

   return(result); // Hence the result ans will be returned to main function
}
