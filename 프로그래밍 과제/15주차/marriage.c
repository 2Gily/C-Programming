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
	marriage m1 = { "ȫ�浿", 20, 'M', 180.5 };;
	marriage* mp;

	mp = &m1;

	printf("�̸� : %s\n", mp->name);
	printf("���� : %d\n", mp->age);
	printf("���� : %c\n", mp->sex);
	printf("  Ű : %.1lf\n", mp->height);

	return 0;

}
