#include<stdio.h>

int main(void)
{
	int a, b ,res = 0;
	char z;
	
	printf("사칙 연산 입력(정수) : ");
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
		printf("다시 입력해주세요.\n");

	printf("%d %c %d = %d\n", a, z, b, res);

		return 0;
}