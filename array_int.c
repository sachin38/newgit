/* Sample of integer array */

#include <stdio.h>

int main()
{

   int sum=0,i,marks[5];
   float average;

   for(i=0;i<=4;i++)
   {
      printf("\n Enter marks");
      scanf("%d",&marks[i]);
   }
   
   for(i=0;i<=4;i++)
   {
      sum=sum+marks[i];
   }

   average=sum/5;

   printf("The marks obtained is %d and average is %f\n",sum,average);   

   return(0);

}
   
