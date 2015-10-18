#include <stdio.h>

int main()
{
   int arr[5]={15,20,25,30,35};
   int *ptr;
   int i;
   ptr=&arr;

   for(i=0;i<5;i++)
   {
      printf("Element %d : %d\n",(i+1),*ptr);
      ptr++;
   }

   return(0);
}
