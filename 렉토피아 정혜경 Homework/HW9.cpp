#include<stdio.h>

int input(void);

int main(void)
{
	int number;

	number = input();

	printf("�Էµ� ���� 8������ %#o �Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x �Դϴ�.\n", number);

	return 0;
}

int input(void)
{
	int number;

	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &number);

	return number;
}