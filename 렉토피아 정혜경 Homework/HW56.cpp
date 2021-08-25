#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void intputNumber(int row, int col, int(*pary)[5]);
void sumNumber(int row, int col, int(*pary)[5], int *psum);
void outputNumber(int row, int col, int sum_size, int(*pary)[5], int *psum);

int main(void)
{
	int ary[5][5];
	int row, col,sum_size;
	int sum[3] = { 0, };

	srand((unsigned int)time(NULL));

	row = sizeof(ary) / sizeof(ary[0]);
	col = sizeof(ary[0]) / sizeof(ary[0][0]);
	sum_size = sizeof(sum) / sizeof(sum[0]);

	intputNumber(row, col, ary);
	sumNumber(row, col, ary, sum);
	outputNumber(row, col,sum_size, ary, sum);

	return 0;
}

void intputNumber(int row, int col, int(*pary)[5])
{
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			*(*(pary + i) + j) = rand() % 20 + 1;
		}
	}
}

void sumNumber(int row, int col, int(*pary)[5], int *psum)
{
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (i == j) *psum += *(*(pary + i) + j);
			else if (i < j) *(psum + 1) += *(*(pary + i) + j);
			else  *(psum + 2) += *(*(pary + i) + j);
		}
	}
}

void outputNumber(int row, int col, int sum_size, int(*pary)[5], int *psum)
{
	int i, j;

	for (i = 0; i < row; i++) {

		printf("%d¹ø Çà : ", i);

		for (j = 0; j < col; j++) {
			printf("%-3d", *(*(pary + i) + j));
		}
		printf("\n");
	}

	for (i = 0; i < sum_size; i++) {
		printf("sum%d = %d\n", i+1, *(psum + i));
	}
}