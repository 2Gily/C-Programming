#include<stdio.h>

int main(void)
{
	int res;
	int a, b;

	printf("���ڸ� �Է����ּ���.\n");
	scanf("%d", &a);
	printf("���ڸ� �Է����ּ���.\n");
	scanf("%d", &b);

	
	if (a >= 0)
	{
		res = a;
	}
	else if (b != 0)
	{
		res = a / b;
	}

	printf("%d\n", res);
}