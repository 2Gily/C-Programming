#include<stdio.h>

int main(void)
{
	double student_height1, student_height2, student_height3, student_height4, student_height5;
	double height_average = 0.0;

	printf("1번 학생의 키는? ");
	scanf("%lf", &student_height1);
	printf("2번 학생의 키는? ");
	scanf("%lf", &student_height2);
	printf("3번 학생의 키는? ");
	scanf("%lf", &student_height3);
	printf("4번 학생의 키는? ");
	scanf("%lf", &student_height4);
	printf("5번 학생의 키는? ");
	scanf("%lf", &student_height5);

	height_average = (student_height1 + student_height2 + student_height3 + student_height4 + student_height5) / 5.0;

	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", height_average);

	return 0;
}