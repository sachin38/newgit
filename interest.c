/* Programme to calculate simple interest */

#include <stdio.h>

int main()
{
   int amt,p,t,r;
   float si; 
   
   printf("\n\n\nEnter principal:");
   scanf("%d",&p);
   printf("Enter time:");
   scanf("%d",&t);
   printf("Enter rate:");
   scanf("%d",&r);

   si=(p*t*r)/100;
   amt=p+si;

   printf("Simple interest is %.2f\n",si); /* .2f% will show up two digits after . */
   printf("Amount is %d\n",amt);
   getchar();
   return(0);
}
