/* Program  to enter two matrics and add them and display result */


#include <stdio.h>


int main()
{

   int a[10][10],b[10][10],c[10][10];
   int row,col,i,j;

/* Asking the size of matrics */
   printf("Enter the number of rows:");
   scanf("%d",&row);

   printf("Enter the number of columns:");
   scanf("%d",&col);

/* Loop to read elements of first matrics */
   printf("Enter the elements of first matrics:\n");
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

/* loop to read elements of second matrics */
   printf("Enter the elements of second matrics:\n");
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         scanf("%d",&b[i][j]);
      }
   }

/* Loop for calculating sum */
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         c[i][j]=a[i][j]+b[i][j];
      }
   }

   printf("Calculating...\n");
   for(i=0;i<4;i++)
   {
      sleep(1);
      printf(".\n");
   }

/* Displaying the elements of first matrics */

   printf("The elements of first matrics are:\n");
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }

   printf("Calculating...\n");
   for(i=0;i<4;i++)
   {
      sleep(1);
      printf(".\n");
   }

/* Displaying the elements of second matrics */

   printf("The elements of second matrics are:\n");
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         printf("%d\t",b[i][j]);
      }
      printf("\n");
   }

   printf("Calculating...\n");
   for(i=0;i<4;i++)
   {
      sleep(1);
      printf(".\n");
   }

/* Displaying the sum of first and  second matrics */
   printf("The elements of sum of first and second matrics are:\n");
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         printf("%d\t",c[i][j]);
      }
      printf("\n");
   }
   
   printf("\n\n\n");   

   return(0);

}
