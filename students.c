#include <stdio.h>

int main()
{
   int i;
   struct student
   {
      int roll_no;
      long int phone_number;
      char name[40];
      char address[30];
      char sec[10];
   };
   struct student info[100];

   for(i=0;i<2;i++)
   {
      printf("\n****Enter information of student %d****\n",i+1);
      printf("Enter name of student :");
      scanf("%s",info[i].name);
      printf("Enter roll number:");
      scanf("%d",&info[i].roll_no);
      printf("Enter phone number:");
      scanf("%ld",&info[i].phone_number);
      printf("Enter Address:");
      scanf("%s",info[i].address);
      printf("Enter section:");
      scanf("%s",info[i].sec);
      printf("\n********************\n");
   }
   
   printf("Information of Students\n");
   for(i=0;i<2;i++)
   {
      printf("Name:%s\n",info[i].name);
      printf("Address:%s\n",info[i].address);
      printf("Phone number:%ld\n",info[i].phone_number);
      printf("Roll number:%d\n",info[i].roll_no);
      printf("Section:%s\n",info[i].sec);
      printf("***************************************\n");
   }
   printf("\n");
   return(0);
}

