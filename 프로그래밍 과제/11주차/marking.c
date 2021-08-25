#include<stdio.h>

int main(void)
{
	char mark[5][5] = { 0 };
	int i, j;

	printf("===================================== 1¹ø =====================================\n\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j)
			{
				mark[i][j] = 'X';
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c", mark[i][j]);
			if (j == 4) printf("\n");
		}
	}

	printf("\n===================================== 2¹ø =====================================\n\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j || i + j ==4)
			{
				mark[i][j] = 'X';
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c", mark[i][j]);
			if (j == 4) printf("\n");
		}
	}

	return 0;
}