#include <stdio.h>
#include <strings.h>

int main()
{
	int score=0;
	char player[15];
	char ans[10];

	printf("Enter the name of player: ");
	scanf("%s",player);
	printf("What is capital city of Japan: ");
	scanf("%s",ans);
	if(strcmp(ans,"tokyo")==0)
	{
		score++;
		printf("Right answer\n");
	}
	else
	{
		printf("Wrong answer\n");
	}

	printf("Where is capital of Australia: ");
	scanf("%s",ans);
	if(strcmp(ans,"canberra")==0)
	{
		score++;
		printf("Right answer\n");
	}
	else
	{
		printf("Wrong answer\n");
	}

	printf("Where was first paper money invented: ");
	scanf("%s",ans);
	if(strcmp(ans,"china")==0)
	{
		score++;
		printf("Right answer\n");
	}
	else
	{
		printf("Wrong answer\n");
	
	}
	
	printf("Where does mount Everest lie: ");
	scanf("%s",ans);
	if(strcmp(ans,"nepal")==0)
	{
		score++;
		printf("Right answer\n");
	}
	else
	{
		printf("Wrong answer\n");
	}

	printf("What is name of linux mascot: ");
	scanf("%s",ans);
	if(strcmp(ans,"tux")==0)
	{
		score++;
		printf("Right answer\n");
	}
	else
	{
		printf("Wrong answer\n");
	}




	printf("congratulation %s ! You scored %d\n",player,score);

	return(0);
}
