#include<stdio.h>

int main(void)
{
	int ascii = 0;
	while (ascii != -1)
	{
		printf("ASCII code 값을 입력하시오 : ");
		scanf("%d", &ascii);

		printf("%d은(는) '%c'의 ASCII code입니다.\n", ascii, ascii);
	}


	return 0;
}