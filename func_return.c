/* Programme to add the two numbers entered by user */

#include <stdio.h>

int add(int,int);
int main()
{

   int a,b,result;

   printf("Enter two numbers to add:\n");
   scanf("%d%d",&a,&b);

   result=add(a,b);
   printf("The sum of %d and %d is %d\n",a,b,result);

   return(0);

}

int add(int x,int y)
{

   int z;
   z=x+y;
   return z;

}   
