#include<stdio.h>

int main(void)
{
	int f, m, sum;
	double per;

	printf("여학생 수를 입력해주세요.");
	scanf("%d", &f);
	printf("남학생 수를 입력해주세요.");
	scanf("%d", &m);
	
	
	sum = m + f;
	per = (double)m / (double)sum;

	printf("여학생수 : %d명 \n", f);
	printf("남학생수 : %d명 \n", m);
	printf("총학생수 : %d명 \n", sum);
	printf("남학생 비율 : %.1lf%% \n", per*100);

	return 0;

}