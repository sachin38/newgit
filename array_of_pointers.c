#include <stdio.h>

int main()
{
   char *ptr[]={
   "January","February",
   "March","April",
   "May","June",
   "July","August",
   "September","October",
   "November","December"
   };
   int i;

   for(i=0;i<12;i++)
   {
      printf("Month %d: %s\n\n",(i+1),ptr[i]);
   }

   return(0);
}
