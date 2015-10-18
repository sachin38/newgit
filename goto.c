#include <stdio.h>

int main()
{
   float dhan,mahen;
   int year=0;

   mahen=30000;
   dhan=100000;

   population:
   mahen=mahen+mahen*0.05;
   dhan=dhan-dhan*0.1;
   year++;
   if(mahen<=dhan)
      goto population;

   printf("It will take %d years\n",year);   

   return(0);
}
