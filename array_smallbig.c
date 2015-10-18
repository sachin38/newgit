#include <stdio.h>
#define N 7

int main()
{
 
   int i;
   int small,large,a[N];
/* Loop for reading elements from array */
   for(i=0;i<N;i++)
   {
      printf("\nEnter the %d the elements of an array:",i+1);
      scanf("%d",&a[i]);
   }

/* loop for printing the element */
   for(i=0;i<N;i++)
   {
      printf("\nThe elements of array are %d\n",a[i]);
      small=a[0];
      large=a[0];
   }

/* Loop to do aarray element comparing */
   for(i=0;i<N;i++)
   {
      if(small>a[i])
      {
         small=a[i];
      }
      else
      {
         large=a[i];
      }
   }

   /* Displaying results */

   printf("\nSmallest element is =%d and largest element=%d\n",small,large);

   return(0);

}
