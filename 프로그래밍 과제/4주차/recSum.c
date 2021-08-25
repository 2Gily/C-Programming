#include <stdio.h>

int rec_sum(int n);

int main(void)
{
	int res;
	int num;

	printf("N까지의 합을 구합니다. N의 넣을 정수를 입력해주세요 : ");
	scanf("%d", &num);

	res = rec_sum(num);
	printf("result : %d\n", res);

	return 0;
}

int rec_sum(int n)
{
	if (n == 1) return 1;
	else return (n + rec_sum(n - 1));
}