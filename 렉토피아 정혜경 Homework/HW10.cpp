#include<stdio.h>

int main(void)
{
	int number1, number2;

	printf("�� ���� ������ �Է��Ͻÿ�  : ");
	scanf("%d %d", &number1, &number2);

	printf("%d + %d = %d\n", number1, number2,number1+number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %.2lf\n", number1, number2, (double)number1 / (double)number2);
}