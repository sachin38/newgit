#include <stdio.h>

void dropBomb(void);

int main()
{

   printf("Press Enter to drop bomb:");
   getchar();
   dropBomb();
   printf("Yikes\n");
   
   return(0);

}


void dropBomb()
{
   int x;
  
   for(x=20;x>1;x--)
   {
      puts("*");
   }
   puts("Boom");
}
