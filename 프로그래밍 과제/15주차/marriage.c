#include<stdio.h>

typedef struct marriage
{
	char name[20];
	int age;
	char sex;
	double height;
}marriage;

int main(void)
{
	marriage m1 = { "홍길동", 20, 'M', 180.5 };;
	marriage* mp;

	mp = &m1;

	printf("이름 : %s\n", mp->name);
	printf("나이 : %d\n", mp->age);
	printf("성별 : %c\n", mp->sex);
	printf("  키 : %.1lf\n", mp->height);

	return 0;

}
