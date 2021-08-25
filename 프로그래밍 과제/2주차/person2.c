#include<stdio.h>

int main()
{

	char name[20];
	int age;
	double height;

	printf("이름 입력 : ");

	scanf("%s", &name);

	printf("나이와 키(cm) 입력 : ");

	scanf("%d%lf", &age, &height);

	printf("%s ,%d살 ,%.1lfcm \n", name, age, height);

	return 0;
}