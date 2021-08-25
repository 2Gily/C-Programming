#include<stdio.h>

int max(int(*pa)[4], int count);

int main(void)
{
	int nums[][4] = { 13, 45, 78, 92, 55, 66, 78, 99, 23, 30 };
	int(*pa)[4];
	int max_num;
	int cnt = 0;

	pa = nums;

	cnt = sizeof(nums) / sizeof(nums[0]);


	max_num = max(pa, cnt);

	printf("%d\n", max_num);

	return 0;
}

int max(int(*pa)[4], int count)
{
	int max =  0 ;
	int i,j = 0;


	for (i = 0; i < 3; i++)
	{
		for(j = 0 ; j<4 ;j++)
			if (pa[i][j] > max)
			{
				max = pa[i][j];
			}
	}

	return max;
}