#include <stdio.h>

int main()
{

   int i=1,j=1;

   while(i<=5)
   {
      while(j<=i)
      {
         printf("*");
         j++;
      }
      printf("\n");
      i++;
   }
   
   return(0);

}
