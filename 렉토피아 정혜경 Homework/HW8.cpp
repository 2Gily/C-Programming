#include<stdio.h>

int main(void)
{
	unsigned int history, literature, entertainment, sum;
	double average;

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &history, &literature, &entertainment);

	(unsigned int)sum = history + literature + entertainment;
	average = (double)sum / 3.0;

	printf("������ %d�̰� ����� %.2lf �Դϴ�.\n", sum, average);

	return 0;
}