#include<stdio.h>
#define MYFLUSH { while(getchar()!='\n'); }

void inputNumber(int *count, int *number);
char* checkJolly(int count, int *number);
void sortNumber(int count, int *temp_number);
void outputResult(int count, int *number,char *result);

int main(void)
{
	int tc;
	int i;
	int count = 0;
	int number[100];

	printf("총 테스트 건수를 입력해주세요 : ");
	scanf("%d",&tc);
	MYFLUSH;
	for(i=0;i<tc;i++){
	inputNumber(&count, number);
	outputResult(count, number, checkJolly(count, number));
	MYFLUSH;
	}
	return 0;
}

void inputNumber(int *count, int *number)
{
	int i;

	scanf("%d", count);
	for (i = 0; i < *count; i++) {
		scanf("%d", number + i);
	}

}

char* checkJolly(int count, int *number)
{
	int temp_number[99];
	int i;
	int big, small;

	for (i = 0; i < count - 1; i++) {
		if (*(number + i) > *(number + i + 1)) {
			big = *(number + i);
			small = *(number + i + 1);
		}
		else {
			big = *(number + i + 1);
			small = *(number + i);
		}
		*(temp_number + i) = big - small;
	}
	sortNumber(count, temp_number);
	for (i = 0; i < count - 2; i++)
	{
		if (*(temp_number + i + 1) - *(temp_number + i) != 1)
		{
			return "Not Jolly jumper";
		}
		else;
	}
	return "Jolly jumper";
}

void sortNumber(int count, int *temp_number)
{
	int i, j;
	int temp;

	for (i = 0; i < count-2; i++) {
		for (j = 0; j < count - i - 2; j++) {
			if (*(temp_number + j) > *(temp_number + j + 1)) {
				temp = *(temp_number + j);
				*(temp_number + j) = *(temp_number + j + 1);
				*(temp_number + j + 1) = temp;
			}
		}
	}
}

void outputResult(int count, int *number, char *result)
{
	int i;

	printf("검사한 수열 : ");
	for (i = 0; i < count; i++) {
		printf("%d ", *(number + i));
	}
	printf("\b");
	printf("(%s)\n\n", result);
}