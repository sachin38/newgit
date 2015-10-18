/* programme to multiply two matrics of size 2*2 */

include <stdio.h>


int main()
{

   int a[i][j],b[i][j],c[i][j];
   int i,j;

   printf("Enter the elements of first matrics:\t");
  
   /* loop for reading input of first matrics */
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

   printf("Enter the elements of second matrics:\t");
   
   /* loop for reading input of second matrics */
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         scanf("%d",&b[i][j]);
      }
   }


