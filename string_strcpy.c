#include <stdio.h>
#include <string.h>

int main()
{
   char str1[]="Have a nice day..";
   char str2[]={};

   strcpy(str2,str1);
   printf("%s\n",str2);

   return(0);
}
