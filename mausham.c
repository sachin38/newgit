/* Mausham Adhikari ko program */
#include <stdio.h>
int main()
{
   float salary,net_pay;
   int choice;

   salary=10000;
   
   printf("Make your choice\n");
   printf("1. If you are single:\n");
   printf("2. If you are married without children:\n");
   printf("3. If you are married without children:\n");
   scanf("%d",&choice);

   switch(choice)
   {
      case 1:
      net_pay=salary-(salary*25.50/100);
      break;

      case 2:
      net_pay=salary-(salary*15.25/100);
      break;
     
      case 3:
      net_pay=salary-(salary*9.75/100);
      break;
      
      default:
      printf("Error in choice try again!!!!!!\n");
      break;
   }
   
   printf("Netpay is %.2f\n",net_pay);
   return(0);
}
