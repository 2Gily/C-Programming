#include <stdio.h>

void swap(int *ary,int size,int i);

int main()
{
	int ary[] = { 1,2,3,4,5};
	int size = sizeof(ary) / sizeof(ary[0]);
	int i,j;

	printf("처음 배열에 저장 된 값 :");
	for (i = 0; i < size; i++)
	{
		printf("%4d",*(ary+i));
	}

	for (i = 0; i < size/2; i++)
	{
		swap(ary, size, i);
	}

	printf("\n바뀐 배열에 저장 된 값 :");

	for (i = 0; i < size; i++)
	{
		printf("%4d", *(ary + i));
	}
	printf("\n");

	return 0;
}

void swap(int *ary,int size,int i)
{
	int temp;

	temp = *(ary + i);
	*(ary + i) = *(ary + (size-i)-1);
	*(ary + (size - i)-1) = temp;
}