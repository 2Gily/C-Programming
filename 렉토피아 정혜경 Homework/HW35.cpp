#include<stdio.h>

int main(void)
{
	int number, check, i;
	int sum = 0;

	for (i = 1; i < 6; i++)
	{
		while (1)
		{
			printf("0보다 큰수를 입력하시오(%d 번째) : ", i);
			check = scanf("%d", &number);

			if (check == 1 && number > 0)
			{
				while (getchar() != '\n');
				sum += number;
				break;
			}
		}
	}

	printf("입력된 값의 총 합 : %d\n", sum);

	return 0;
}