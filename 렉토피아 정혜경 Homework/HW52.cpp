#include<stdio.h>

int inputNumber(int *pary);
void selectSort(int *pary, int count);
void printArray(int *pary, int count);

int main(void)
{
	int tc;
	int i;
	int count;
	int ary[100];

	freopen("c:\\data\\hw52_sortData.txt", "rt", stdin);
	scanf("%d", &tc);
	for (i = 0; i < tc; i++)
	{
		count = inputNumber(ary);
		printf("# 소트 전 데이터 : ");
		printArray(ary, count);
		selectSort(ary, count);
		printf("# 소트 후 데이터 : ");
		printArray(ary, count);
		printf("\n\n");
	}
	return 0;
}

int inputNumber(int *pary)
{
	int i = 0;
	int count = 0;

	while (1) {
		scanf("%d", &pary[i]);
		if (pary[i] == 0) break;
		count++;
		i++;
	}
	return count;
}

void selectSort(int *pary, int count)
{
	int i, j;
	int temp;

	for (i = 0; i < count; i++) {
		for (j = 0; j < count - i - 1; j++) {
			if (pary[j] > pary[j + 1]) {
				temp = pary[j];
				pary[j] = pary[j + 1];
				pary[j + 1] = temp;
			}
		}
	}
}

void printArray(int *pary, int count)
{
	int i;

	for (i = 0; i < count; i++) {
		printf("%d ", pary[i]);
	}
	printf("\b\n");
}