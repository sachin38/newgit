/* Program to enter age of 10 persons and count number of person between 50 to 60 years */
#include <stdio.h>

int main()
{

   int i,age[10],count;

   for(i=0;i<10;i++)
   {
      printf("\nEnter the age of person:");
      scanf("%d",&age[i]);
   }

   count=0;   
   for(i=0;i<10;i++)
   {
      if(age[i]>=50 && age[i]<=60)
      {
         count++;
      }
      else
      {
         continue;
      }
   }

   printf("\nThe people between age group 50 to 60 are %d\n",count);

   return(0);

}
