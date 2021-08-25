#include<stdio.h>
#define MYFLUSH { while(getchar()!='\n'); }

int inputNumber(int *number, int *size);
int checkNumber(int *number, int size);
void outputResult(int count);

int main(void)
{
	int number[1000];
	int size = 0;
	int check;

	while ("Have a nice day~!!") {
		check = inputNumber(number, &size);
		if (check != 1) break;
		outputResult(checkNumber(number, size));
	}
	return 0;
}

int inputNumber(int *number, int *size)
{
	int check;
	int i;

	while (1) {
		printf("* 입력할 숫자의 개수 : ");
		check = scanf("%d", size);
		if (*size > 1 && *size < 1001) {
			MYFLUSH;
			break;
		}
		else MYFLUSH;
		if (check != 0) break;
	}
	if (check != 1) return check;
	printf("* 숫자 입력 : ");
	for (i = 0; i < *size; i++) {
		scanf("%d", number + i);
	}
	return check;
}

int checkNumber(int *number, int size)
{
	int i, j;
	int count = 0;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (*(number + i) == *(number + j)) *(number + j) = 0;
		}
	}

	for (i = 0; i < size; i++) {
		if (*(number + i) != 0) count++;
	}

	return count;
}

void outputResult(int count)
{
	printf("서로 다른 수의 개수 : %d\n\n", count);
}