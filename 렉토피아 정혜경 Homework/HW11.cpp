#include<stdio.h>

int main(void)
{
	int ascii = 0;
	while (ascii != -1)
	{
		printf("ASCII code ���� �Է��Ͻÿ� : ");
		scanf("%d", &ascii);

		printf("%d��(��) '%c'�� ASCII code�Դϴ�.\n", ascii, ascii);
	}


	return 0;
}