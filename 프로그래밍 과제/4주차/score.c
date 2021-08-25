#include<stdio.h>

int total(int kor, int eng, int math);
double average(int tot);
void print_title(void);

int main(void)
{
	int kor, eng, math;
	int sum;
	double avg;

	printf("국어 영어 수학의 점수를 순서대로 입력해주세요 : ");
	scanf("%3d %3d %3d", &kor, &eng, &math);

	sum = total(kor, eng, math);
	avg = average(sum);
	print_title();
	printf("%d점 %d점 %d점 %d점 %.2lf점\n", kor, eng, math, sum, avg);
	
}

int total(int kor, int eng, int math)
{
	int tot;
	tot = kor + eng + math;
	return tot;
}
double average(int tot)
{
	double avg;
	avg = tot / 3;
	return avg;
}
void print_title(void)
{
	printf("국어 영어 수학 총점   평균\n");
}