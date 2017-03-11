/*Program to ask name, post and salary of 10 employees and write it
to file 'employee.dat' */


#include <stdio.h>

struct employee
{
	char name[10];
	char post[10];
	int salary;
};

int main()
{
	struct employee e[3];
	int i;
	FILE *fp;

	for(i=0; i<3; i++)
	{
		printf("Enter the name of employee %d: ", i+1);
		scanf("%s", e[i].name);
	
		printf("Enter the post of employee %d: ", i+1);
		scanf("%s", e[i].post);

		printf("Enter the salary of employee %d: ", i+1);
		scanf("%d", &e[i].salary);

		printf("\n\n\n");
		fp = fopen("employee.dat", "a");
		fprintf(fp, "Name: %s\n", e[i].name);
		fprintf(fp, "Post: %s\n", e[i].post);
		fprintf(fp, "Salary: %d\n\n\n", e[i].salary);
		fclose(fp);
	}

	return 0;
}
