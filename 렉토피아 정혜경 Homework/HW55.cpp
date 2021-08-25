#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inputNumber(int(*ary)[4], int col_size, int row_size);
void ouputNumber(int(*ary)[4], int col_size, int row_size);

int main(void)
{
	int ary[3][4];
	int col_size = sizeof(ary[0]) / sizeof(ary[0][0]);
	int row_size = sizeof(ary) / sizeof(ary[0]);

	inputNumber(ary, col_size, row_size);
	ouputNumber(ary, col_size, row_size);

	return 0;
}

void inputNumber(int(*ary)[4], int col_size, int row_size)
{
	int i, j;

	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < col_size; j++)
		{
			ary[i][j] = (rand() % 9) + 1;
		}
	}
}

void ouputNumber(int(*ary)[4], int col_size, int row_size)
{
	int i, j, k;
	int row_sum = 0;
	int col_sum[4] = {0,};

	for (i = 0; i <= row_size; i++)
	{
		if (i == row_size)
		{
			printf("열의 합 : ");

			for (k = 0; k < col_size; k++)
			{
				if (k == 0) printf("%2d", col_sum[k]);
				else printf("%3d", col_sum[k]);
			}

			printf("\n");
			break;
		}

		for (j = 0; j <= col_size; j++)
		{
			if (j == col_size)
			{
				printf("%7d 행의 합 : %d\n", i, row_sum);
				row_sum = 0;
				break;
			}

			row_sum += ary[i][j];
			col_sum[j] += ary[i][j];

			if (j == 0)
			{
				printf("%d%-6s : ", i, "행");
				printf("%2d", ary[i][j]);
			}
			else printf("%3d", ary[i][j]);
		}
	}
}