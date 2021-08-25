#include<stdio.h>
#include<math.h>
#define MYFlUSH while(getchar()!='\n')

void inputNumber(int *number);
int primeNumber(int number);
void outputPrime(int number);

int main(void)
{
	int number;
	inputNumber(&number);
	outputPrime(number);

	return 0;
}

void inputNumber(int *number)
{
	while (1) {
		printf("* 정수값 하나를 입력하시오 : ");

		if (scanf("%d", number) == 1 && *number > 0) {
			MYFlUSH;
			break;
		}
		MYFlUSH;
	}
}

int primeNumber(int number)
{
	int i, sqrt_num;
	sqrt_num = (int)sqrt(number);
	for (i = 2; i <= sqrt_num; i++) {
		if (number % i == 0)
			return 0;
	}
	return 1;

}

void outputPrime(int number)
{
	int i;
	int count = 0;

	printf("\n1부터 %d까지의 소수 값은 다음과 같습니다.\n", number);

	for (i = 2; i < number + 1; i++){
		if (primeNumber(i) == 1){
			if (count % 5 == 0) printf("\n");
			printf("%-5d", i);
			count++;
		}

	}
	printf("\n\n1 ~ %d까지의 총 소수는 %d개 입니다.\n", number, count);
	return;
}