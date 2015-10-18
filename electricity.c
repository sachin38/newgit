#include <stdio.h>

int main()
{
   int unit;
   float cost;

   printf("Enter the unit of electricity consumed:\n");
   scanf("%d",&unit);

   if(unit<=20)
   {
      cost=80;
   }
   else if(unit>20 && unit<=40)
   {
      cost=unit*6;
   }
   else if(unit>40 && unit<=80)
   {
      cost=unit*6.5;
   }
   else if(unit>80 && unit<=100)
   {
      cost=unit*7;
   }
   else
   {
      cost=unit*7.5;
   }

   printf("The total charge is Rs %.2f\n",cost);
   
   return(0);
}
