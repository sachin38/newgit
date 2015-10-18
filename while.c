#include <stdio.h>

int main()
{

   int i=0;

   while(i<=100)
   {
    
      i++;
      sleep(1);
      printf("Sum is %d\n",i);
   }
   
   printf("Sum is %d\n",i);
   return(0);

}
