/* Programme to find the division of student */

#include <stdio.h>

int main()
{
  
   int s1,s2,s3,s4,s5,total;
   float per;

   printf("\n\n\n\nEnter marks obtained in subjects by your son/daughter:");
   scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

   total=500;
   per=100*(s1+s2+s3+s4+s5)/total;

   if(per>=80) /* If percent is more than or equal to 80 */
   {
      printf("\n\n\nCongratulation! Distinction\n");
   }
   else if(per>80)
   {
      printf("\n\n\nCongratulation! First division\n");
   }
   else if(per>=50)
   {
      printf("\n\n\nCongratulation! Second division\n");
   }
   else
   {
      printf("\n\n\nGo fuck your self! Failed\n\n\n");
   }

   return(0);

}
