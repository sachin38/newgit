/* Program showing use of switch */
#include <stdio.h>

int main()
{
   int a,b,s,input;

   printf("Enter two numbers for operation:\n");
   scanf("%d%d",&a,&b);
   
   printf("Press 1 for addition\n");
   printf("Press 2 for subtraction\n");
   printf("Press 3 for multiplication\n");
   printf("Press 4 for division\n");

   printf("Enter your choice:\n");
   scanf("%d",&input);

   switch(input)
   {
      case 1:
      s=a+b;
      printf("The sum is %d\n",s);
      break;
   
      case 2:
      s=a-b;
      printf("The difference is %d\n",s);
      break;

      case 3:
      s=a*b;
      printf("The product is %d\n",s);
      break;

      case 4:
      s=a/b;
      printf("The reminder is %d\n",s);
      break;

      default:
      printf("Wrong entry\n");
      break;
   }

   return(0);
}
