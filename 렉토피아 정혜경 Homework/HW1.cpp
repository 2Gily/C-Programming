#include<stdio.h>

void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "�̱���";
	int age = 27;
	double height = 177.5;
	
	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;

}

void printAge(int age)
{
	printf("���� : %d\n", age);
}
void printHeight(double height)
{
	printf("Ű : %.1lf\n", height);
}