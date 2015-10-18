/* Program that accepts the proce and stock of five different bulb and calculate totalstock value */

#include <stdio.h>

int main()
{

   int i,stock[5];
   float price[5];
   float total=0;
   
   for(i=0;i<5;i++)
   {
      printf("Enter stock of bulb %d:",i+1);
      scanf("%d",&stock[i]);
     
      printf("Enter the price of bulb %d:",i+1);
      scanf("%f",&price[i]);
    
      total+=stock[i]*price[i];
   }

   printf("The total price of stock value is %f\n",total);

   return(0);

}
