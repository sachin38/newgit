/*programme to find greater number */
#include <stdio.h>

int main()
{

   int a,b;

   printf("Enter the first number:");
   scanf("%d",&a);
   
   printf("Enter the second number:");
   scanf("%d",&b);

   if(a<b)
   {
      printf("%d is greater number\n",b);
   }
   else
   {
      printf("%d is greater number\n",a);
   }

   return(0);

}
