#include<stdio.h>

int main()
{

	char name[20];
	int age;
	double height;

	printf("�̸� �Է� : ");

	scanf("%s", &name);

	printf("���̿� Ű(cm) �Է� : ");

	scanf("%d%lf", &age, &height);

	printf("%s ,%d�� ,%.1lfcm \n", name, age, height);

	return 0;
}