#include<stdio.h>
typedef struct student {
	int num;
	char name[20];
	int score[5];
	double avg;
}student;

student printf_avg(student s1);

int main(void){
	student s1 = { 315, "홍길동",{82,93,74,90,65} };

	s1 = printf_avg(s1);
	printf("평균 : %.1lf\n", s1.avg);

	return 0;
}

student printf_avg(student s1)
{
	int i, sum = 0;

	printf("학번 : %d\n", s1.num);
	printf("이름 : %s\n", s1.name);
	printf("점수 :");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%3d", s1.score[i]);
		sum += s1.score[i];
	}
	printf("\n");
	s1.avg = sum / 5.0;

	return s1;
}