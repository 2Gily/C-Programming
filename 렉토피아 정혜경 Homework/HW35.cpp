#include<stdio.h>

int main(void)
{
	int number, check, i;
	int sum = 0;

	for (i = 1; i < 6; i++)
	{
		while (1)
		{
			printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ", i);
			check = scanf("%d", &number);

			if (check == 1 && number > 0)
			{
				while (getchar() != '\n');
				sum += number;
				break;
			}
		}
	}

	printf("�Էµ� ���� �� �� : %d\n", sum);

	return 0;
}