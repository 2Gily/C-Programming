#include<stdio.h>

int main(void)
{
	int number1, number2;

	printf("두 개의 정수를 입력하시오  : ");
	scanf("%d %d", &number1, &number2);

	printf("%d + %d = %d\n", number1, number2,number1+number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %.2lf\n", number1, number2, (double)number1 / (double)number2);
}