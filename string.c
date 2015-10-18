/* Using strcpy() ans strncpy() to copy string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char x[]="Happy New Year!!";
   char y[50],z[50];
   printf("Original string:%s\n",x);
   printf("Copied string:%s\n",strcpy(y,x));

   return(0);

}
