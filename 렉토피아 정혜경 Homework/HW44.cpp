#include<stdio.h>
#define MYFlUSH while(getchar()!='\n')

void inputRange(int *starting, int *ending);
void inputSumtype(int starting, int ending, char *sum_type);
int calculateSum(int starting, int ending, char sum_type);
void outputResult(int starting, int ending, int sum, char sum_type);

int main(void)
{
	int starting, ending;
	int sum = 0;
	char sum_type;

	inputRange(&starting, &ending);
	inputSumtype(starting, ending, &sum_type);
	sum = calculateSum(starting, ending, sum_type);
	outputResult(starting, ending, sum, sum_type);

	return 0;
}

void inputRange(int *starting, int *ending)
{
	int ending_check;

	while ("HomeWork")
	{
		printf("# 시작 값을 입력하시오 :");
		if (scanf("%d", starting) != 1) {
			MYFlUSH;
			printf("!! 잘못 입력하셨습니다. 다시 입력해주세요.\n\n");
			continue;
		}
		MYFlUSH;
		while ("HomeWork")
		{
			printf("# 끝 값을 입력하시오 :");
			ending_check = scanf("%d", ending);
			if (ending_check == 1 && *ending > *starting) {
				MYFlUSH;
				break;
			}
			MYFlUSH;
			printf("!! %d 보다 큰 정수를 입력해주세요.\n\n", *starting);
		}
		break;
	}

}
void inputSumtype(int starting, int ending, char *sum_type)
{
	while ("7월 16일")
	{
		printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수 : e / 홀수 : o)", starting, ending);
		scanf("%c", sum_type);
		if (*sum_type == 'e' || *sum_type == 'o') {
			MYFlUSH;
			break;
		}
		MYFlUSH;
	}

}

int calculateSum(int starting, int ending, char sum_type)
{
	int i;
	int even_sum = 0, odd_sum = 0;

	if (sum_type == 'e')
	{
		for (i = starting; i < ending + 1; i++) {
			if (i % 2 == 0) even_sum += i;
		}
		return even_sum;
	}
	else {
		for (i = starting; i < ending + 1; i++) {
			if (i % 2 == 1) odd_sum += i;
		}
		return odd_sum;
	}
}

void outputResult(int starting, int ending, int sum, char sum_type)
{
	int i;

	printf("%d~%d 까지의 ", starting, ending);
	if (sum_type == 'e') printf("짝수");
	else printf("홀수");
	printf("(");
	if (sum_type == 'e')
	{
		for (i = starting; i < ending + 1; i++) {
			if (i % 2 == 0) printf("%d ", i);
		}
	}
	else {
		for (i = starting; i < ending + 1; i++) {
			if (i % 2 == 1) printf("%d ", i);
		}
	}
	printf("\b)의 합은 %d 입니다.\n", sum);
}