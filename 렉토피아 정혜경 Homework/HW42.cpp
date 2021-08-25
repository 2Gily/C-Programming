#include<stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 6; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
			if (j % 5 == 0) printf("\n");
		}
	}
	printf("\n\n");
	for (i = 1; i < 10; i++)
	{
		for (j = 6; j < 10; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
			if (j % 9 == 0) printf("\n");
		}
	}
	printf("------------------------------------\n");
	for (i = 0; i < 8; i += 4)
	{

		for (j = 1; j < 10; j++)
		{
			for (k = i+2; k < 6+i; k++)
			{
				printf("%d*%d=%d\t", k, j, k*j);
				if (k % 5 == 0 || k %9 ==0) printf("\n");
				if (k == 5 && j == 9) printf("\n\n");
			}

		}
	}
	return 0;
}