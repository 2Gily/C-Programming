#include<stdio.h>

int main(void)
{
	char name[25] = "�̱���";
	int age = 29;
	float height = 176.5;
	char type[10] = "O��";

	printf("10�� ���� ������...\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n",age+=10);
	printf("Ű : %.1f\n", height -= 0.5);
	printf("������ : %s\n",type);

	return 0;

}