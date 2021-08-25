#include<stdio.h>

int main(void)
{
	int i, j;
	char alphabet;

	while (1)
	{
		printf("* 영문자 대문자 입력('A'~'Z') : ");
		scanf("%c", &alphabet);

		if (alphabet <'A' || alphabet >'Z')
		{
			break;
		}
		while (getchar() != '\n');

		for (i = alphabet; i > 'A' - 1; i--)
		{
			for (j = 0; j <= alphabet - i; j++)
			{
				printf("%c", alphabet - j);
			}
			printf("\n");
		}
		printf("\n");
		printf("\n");
	}

	return 0;
}