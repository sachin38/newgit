/* Program to swap two numbers */
#include <stdio.h>

void swap(int a,int b);
int main()
{
   int x,y;

   printf("Enter first number(x):\n");
   scanf("%d",&x);
   printf("Enter second numbers(y):\n");
   scanf("%d",&y);

   swap(x,y);
   return(0);
}

void swap(int x,int y)
{
   int temp;
   temp=x; // temp holds value of numeric value of x now
   x=y; // x holds numeric value of y now
   y=temp; // y now holds value of temp which was transferred from x
   printf("\nValue of x now is %d and y is %d\n",x,y);
}

