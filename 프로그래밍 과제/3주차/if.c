#include<stdio.h>

int main(void)
{
	int res;
	int a, b;

	printf("숫자를 입력해주세요.\n");
	scanf("%d", &a);
	printf("숫자를 입력해주세요.\n");
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