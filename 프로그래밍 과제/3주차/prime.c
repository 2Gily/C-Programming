#include <stdio.h>

int main(void)
{
	int i,j,k=0;
	int num;

	printf("정수를 입력해주세요(2이상) : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
			k++;
			if (k % 5 == 0) printf("\n");
		}
	}
	printf("\n");
	return 0;
}