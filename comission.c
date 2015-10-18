/* C programme to calculate commission */

#include <stdio.h>

int main()
{

   int sales,com;

   printf("Enter monthly sales:");
   scanf("%d",&sales);

   if(sales<1000)
   {
      com=0.5*sales;
      printf("Commission is %d\n",com);
   }
   else if(sales>=1000 && sales<10000)
   {
      com=0.10*sales;
      printf("Commission is %d\n",com);
   }
   else
   {
      com=0.15*sales;
      printf("Commission is %d\n",com);
   }

   return(0);

}
      
