#include <stdio.h>

int main()
{
   int x;
   int *ptr;

   printf("Enter a number:\n");
   scanf("%d",&x);

   ptr=&x;
   printf("The address of x is %d\n",ptr);
   printf("The value of x is %d\n",*ptr);

   return(0);   
}
