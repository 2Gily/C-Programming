#include<stdio.h>

int main(void)
{
	double ary1[4] = { 1.5, 2.3, 7.7, 4.9 };
	double ary2[4] = { 3.4, 7.2, 4.0, 9.1};
	double ary3[4] = { 0.3, 7.2, 8.4, 6.6 };
	double *pary[3] = { ary1, ary2, ary3};
	double avg[3] = { 0 };
	double tot, max;
	int i, j, index;

	for (i = 0; i < 3; i++)
	{
		tot = 0;

		for (j = 0; j < 4; j++)
		{
			tot += pary[i][j];
		}
		avg[i] = tot / 4.0;
	}

	max = 0;
	index = 0;
	for (i = 0; i < 3; i++)
	{
		if (avg[i] > max)
		{
			max = avg[i];
			index = i;
		}
	}

	printf("%d¹ø ¹è¿­ : ", index);
	for (i = 0; i < 4; i++)
	{
		printf("%5.1lf", pary[index][i]);
	}

	printf("\nÆò±Õ : %.1lf \n", max);

	return 0;
}

