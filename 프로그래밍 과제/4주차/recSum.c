#include <stdio.h>

int rec_sum(int n);

int main(void)
{
	int res;
	int num;

	printf("N������ ���� ���մϴ�. N�� ���� ������ �Է����ּ��� : ");
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