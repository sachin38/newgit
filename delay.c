
#include <stdio.h>

int main()
{

   int loopcount,d;
   /* Loop is infinite */
   for(loopcount=0;loopcount<=20;loopcount++)
  
   {
      
      loopcount=1; /* Loop will start from 1 */
      sleep(1);  /* 1 sec dlay in executing */
      printf("Hello loop %d \n",loopcount);
      
   }
   
 
   return(0);
}


