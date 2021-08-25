#include<stdio.h>

int main(void)
{
	unsigned int history, literature, entertainment, sum;
	double average;

	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &history, &literature, &entertainment);

	(unsigned int)sum = history + literature + entertainment;
	average = (double)sum / 3.0;

	printf("총점은 %d이고 평균은 %.2lf 입니다.\n", sum, average);

	return 0;
}