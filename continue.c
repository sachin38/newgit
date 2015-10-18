#include <stdio.h>

int main()
{

   int x;

   for(x=1;x<=5;x++)
   {
      if(x==5)
      continue;
      printf("%d",x);
    
   }
   printf("Finished loop");

   return(0);

}
