/* Programme to calculate area and perimeter of circle */
#include <stdio.h>

int main()
{
   int r;
   float perimeter,area,pi;
   
   printf("Enter radius of circle:\n");
   scanf("%d",&r);

   pi=3.14;
   area=pi*r*r;
   perimeter=2*pi*r;

   printf("Area of circle is %.2f\n",area);
   printf("Perimeter of circle is %.2f\n",perimeter);

   return(0);
}
