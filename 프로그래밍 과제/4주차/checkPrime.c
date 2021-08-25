#include<stdio.h>

int prime_check(int n);

int main(void)
{
	int num;
	int i;
	int cnt=0;

	printf("숫자를 입력해주세요 : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		if(prime_check(i)==1)
		{
						printf(" %d ", i);
						cnt++;
						if (cnt % 5 == 0)
						{
							printf("\n");
						}
					}
	}
	printf("\n");
	return 0;
}

int prime_check(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}