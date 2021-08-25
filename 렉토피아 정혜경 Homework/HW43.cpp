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
		printf("* ������ �ϳ��� �Է��Ͻÿ� : ");

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

	printf("\n1���� %d������ �Ҽ� ���� ������ �����ϴ�.\n", number);

	for (i = 2; i < number + 1; i++){
		if (primeNumber(i) == 1){
			if (count % 5 == 0) printf("\n");
			printf("%-5d", i);
			count++;
		}

	}
	printf("\n\n1 ~ %d������ �� �Ҽ��� %d�� �Դϴ�.\n", number, count);
	return;
}