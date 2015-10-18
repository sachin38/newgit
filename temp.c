#include <stdio.h>

int main()
{

   int lower,upper;
   float celsius,fahr;
   
   lower=0;
   upper=300;

   for(fahr=lower;fahr<=upper;fahr+=20)
   {
      celsius=5*(fahr-32)/9;
      sleep(1);
      printf("%.1f\t%.1f\n",fahr,celsius);
   }
  
   return(0);

}
