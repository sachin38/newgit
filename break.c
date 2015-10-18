#include <stdio.h>

int main()
{

   int x;
  
   for(x=1;x<=10;x++)
   {
      if(x>5)
   
         break; 
         printf("%d\n",x);
         sleep(1);
   
   }
   printf("Next executed\n");
   
   return(0);

}

