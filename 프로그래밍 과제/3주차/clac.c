#include<stdio.h>

int main(void)
{
	int a, b ,res = 0;
	char z;
	
	printf("��Ģ ���� �Է�(����) : ");
	scanf("%d %c %d", &a, &z, &b);

	if(z =='+')
	{ 
		res = a + b;
	}
	else if (z =='-')
	{
		res = a - b;
	}
	else if (z =='*')
	{
		res = a * b;
	}
	else if (z == '/')
	{
		res = a / b;
	}
	else
		printf("�ٽ� �Է����ּ���.\n");

	printf("%d %c %d = %d\n", a, z, b, res);

		return 0;
}