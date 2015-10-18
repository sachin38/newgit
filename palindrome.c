/* Program to find whether the number is palindrome or not */
#include <stdio.h>

int main()
{
   int a,b,c,d,rev,num,temp;

   printf("Enter a four digit number:\n");
   scanf("%d",&num);
   temp=num;

   d=num%10;
   num=num/10;
   c=num%10;
   num=num/10;
   b=num%10;
   num=num/10;
   a=num;

   rev=d*1000+c*100+b*10+a*1;
   
   if(rev==temp)
   {
      printf("Palindrome\n");
   }
   else
   {
      printf("Not Plaindrome\n");
   }
   return(0);
}
