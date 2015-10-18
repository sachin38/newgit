/* Programme to search for character in string */
#include <stdio.h>
#include <string.h>

int main()
{
   char str[]="Hello World";
   char str1[]="World";
   if(strstr(str,str1))
   {
      printf("The string exist in the string\n");
   }
   else
   {
      printf("The string doesnt exist in string\n");
   }

   return(0);
} 
