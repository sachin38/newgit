#include <stdio.h>
 
int main()
{
  int age;
 
  printf( "Please enter your current age: " );
  scanf( "%d", &age );
  if ( age <= 12 )
  {
    printf( "You're just a kid!\n" );
  }
  else if ( age < 20 )
  {
    printf( "Being a teenager is pretty great!\n" );
  }
  else if ( age < 40 ) 
  {
    printf( "You're still young at heart!\n" );
  }
  else 
  {
    printf( "With age comes wisdom.\n" );
  }
  return 0;
}

