/* Program to print number from 1 to 10 using loop */

#include <stdio.h>

int main()
{

   int x=1;

   do
   {
      sleep(1);
      printf("%d\n",x);
      x++;
   }
   while(x<=10);

   return(0);

}
