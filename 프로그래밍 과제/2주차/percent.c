#include<stdio.h>

int main(void)
{
	int f, m, sum;
	double per;

	printf("���л� ���� �Է����ּ���.");
	scanf("%d", &f);
	printf("���л� ���� �Է����ּ���.");
	scanf("%d", &m);
	
	
	sum = m + f;
	per = (double)m / (double)sum;

	printf("���л��� : %d�� \n", f);
	printf("���л��� : %d�� \n", m);
	printf("���л��� : %d�� \n", sum);
	printf("���л� ���� : %.1lf%% \n", per*100);

	return 0;

}