#include<stdio.h>

int main(void)
{
	int i, j, line;

	while (1)
	{
		printf("# ��� ���μ��� �Է��Ͻÿ� : ");

		if (scanf("%d", &line) != 1)
		{
			break;
		}
		else if (line < 0)
		{
			printf("!! 1�̻��� ������ �Է����ּ���\n\n");
			while (getchar() != '\n');
			continue;
		}
		while (getchar() != '\n');

		for (i = 1; i < line + 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("*");
			}

			printf(" ");

			for (j = line * 2 - i * 2; j > 0; j--)
			{
				printf(" ");
			}
			for (j = 0; j < i; j++)
			{
				printf("*");
				if (j == i - 1) printf("\n");
			}
		}
	}

	return 0;
}