#include <stdio.h>

void sexy(int repeat);
int main()
{
   printf("I hate her but\n");
   sexy(1);
   printf("She hate me but\n");
   sexy(2);
   printf("Her boyfriend hates me but\n");
   sexy(3);
   
   return(0);
}

void sexy(int repeat)
{
   int i;

   for(i=0;i<repeat;i++)
   {
      printf("She is sexy\n");
   }
}
