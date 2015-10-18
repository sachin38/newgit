#include <stdio.h>

int main()
{
   int i;

   i=0;

   ab:
   i=i+1;
   printf("Puja Adhikari\n");
   if(i<=3)
      goto ab;

   return(0);
}
