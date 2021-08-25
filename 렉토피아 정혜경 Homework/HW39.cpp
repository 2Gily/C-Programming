#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d  ", i+j*10);
			if (j == 9) printf("\n");
		}
	}

	return 0;
}