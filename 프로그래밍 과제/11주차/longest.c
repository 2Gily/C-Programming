#include<stdio.h>

int main(void)
{
	char fruits[5][20];
	int i, j,len;
	int max = 0;
	int index = 0;

	printf("과일의 이름을 입력해주세요(5가지)\n");

	for (i = 0; i < 5; i++)
	{
		scanf("%s", fruits[i]);
	}

	for (i = 0; i < 5; i++)
	{
		len = strlen(fruits[i]);

		if (len > max)
		{
			max = len;
			index = i;
		}
	}

	printf("길이가 가장 긴 과일 이름은 %s 입니다.\n", fruits[index]);

	return 0;
}