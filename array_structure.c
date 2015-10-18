#include <stdio.h>
#include <strings.h>

struct Album
{
   char title[35];
   char artist[35];
   char no_of_tracks[5];
   char year[5];
}

main()
{
   struct Album album[2];

   int i,j;
   
   for(i=0;i<2;i++)
   {
      printf("Enter title:");
      gets(album[i].title);
      printf("Enter artist:");
      gets(album[i].artist);
      printf("Enter number of tracks:");
      gets(album[i].no_of_tracks);
      printf("Enter Year:");
      gets(album[i].year);
      printf("\n**********\n");
   }

   printf("\nDisplaying Information...\n");
   for(j=0;j<2;j++)
   {
      printf("Title:");
      puts(album[j].title);
      printf("Artist:");
      puts(album[j].artist);
      printf("Number of Tracks:");
      puts(album[j].no_of_tracks);
      printf("Years:");
      puts(album[j].year);
      printf("\n**********\n");
   }

}
















