#include<stdio.h>

void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "이길형";
	int age = 27;
	double height = 177.5;
	
	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;

}

void printAge(int age)
{
	printf("나이 : %d\n", age);
}
void printHeight(double height)
{
	printf("키 : %.1lf\n", height);
}