#include<stdio.h>

int main(void)
{
	double student_height1, student_height2, student_height3, student_height4, student_height5;
	double height_average = 0.0;

	printf("1�� �л��� Ű��? ");
	scanf("%lf", &student_height1);
	printf("2�� �л��� Ű��? ");
	scanf("%lf", &student_height2);
	printf("3�� �л��� Ű��? ");
	scanf("%lf", &student_height3);
	printf("4�� �л��� Ű��? ");
	scanf("%lf", &student_height4);
	printf("5�� �л��� Ű��? ");
	scanf("%lf", &student_height5);

	height_average = (student_height1 + student_height2 + student_height3 + student_height4 + student_height5) / 5.0;

	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", height_average);

	return 0;
}