/* Nested loop to form  Right angled triangle pyramid */

#include <stdio.h>

void loop();
int main()
{

   loop();

   return(0);

}

void loop()
{
   int i,j;   

   for(i=0;i<=4;i++)
   {
      for(j=0;j<=i;j++)
      {
         printf("*");
      }
      printf("\n");
   }
}
