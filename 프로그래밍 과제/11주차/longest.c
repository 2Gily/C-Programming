#include<stdio.h>

int main(void)
{
	char fruits[5][20];
	int i, j,len;
	int max = 0;
	int index = 0;

	printf("������ �̸��� �Է����ּ���(5����)\n");

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

	printf("���̰� ���� �� ���� �̸��� %s �Դϴ�.\n", fruits[index]);

	return 0;
}