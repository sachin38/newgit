/* Two dimensional array example */

#include <stdio.h>

int main()
{

   int a[3][4];
   int i,j;

  /* Storing elements of 2-d array */
   for(i=0;i<3;++i)
   for(j=0;j<4;++j)
   {
      a[i][j]=i+j;
   }

   /* printing i and j elements of 2-d array */
   for(i=0;i<3;++i)
   for(j=0;j<4;++j)
      {
         printf("a[%d][%d] = %d\n",i,j,a[i][j]);
         printf("\n");
      }
   

   return(0);

}
