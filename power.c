#include <stdio.h>

int power(int,int);
int main()
{
   int x,y,ans;

   printf("Enter number:");
   scanf("%d",&x);   /* Supposing number entered is 2 */
   printf("Enter power:");
   scanf("%d",&y);  /* Supposing power entered is 2 */
   ans=power(x,y);  /* X and y are transferred to power ans return value of poer is transferred to ans from power */
   
   /* Displaying the results */
   if(y==2)
   {
      printf("Square of %d is %d\n",x,ans);
   }
   else if(y==3)
   {
      printf("Cube of %d is %d\n",x,ans);
   }
   else
   {
      printf("%d power %d is %d\n",x,y,ans);
   } 

   return(0);
}

int power(int x,int y) /* Dummy variable to hold value of x and y to hold value transferred from main() */
{
   int ans,i; /* Variable declaration for further use */

   ans=1; /* Declaring variable as 1 */
   for(i=0;i<y;i++) /* Supposing y entered is 2, the loop runs twice multiplying the numbers twice */
   {
      ans=ans*x;  /* When loop runs the value gets stored in ans and again that value is used to multiply the term giving us our answers */
   }
   return(ans); /* returning the ans to main() */
}
   
