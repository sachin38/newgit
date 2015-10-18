#include <stdio.h>

int main()
{

   int looper;

   for(looper=0;looper<=10;looper++) /* (Initialization;test condition;loop increment or decrement) */
   {
      sleep(1);
      printf("Fuck you %d\n",looper);
   }
   
   return(0);   
}
