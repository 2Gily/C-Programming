#include<stdio.h>

void myflush(void);
int inputWeight(void);
int outputResult(int weight,int count);


int main()
{
	int count=0 ;
	int check;
	int weight;

	while (1)
	{
		weight = inputWeight();
		count += outputResult(weight, count);
		if (count == 10)
		{
			printf("*** �ް� ������ �������ϴ�\n\n");
			break;
		}
	}

	return 0;
}

void myflush(void)
{
	while (getchar() != '\n');
}

int inputWeight(void)
{
	int weight;
	int check;
	int count = 0;
	
	while (1)
	{
		printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
		check = scanf("%d", &weight);

		if (check == 1)
		{
			myflush();
			break;
		}

		printf("�߸� �ԷµǾ����ϴ�. �ٽ� �Է����ּ���.\n\n");
		myflush();
	}

	return weight;
}

int outputResult(int weight,int count)
{

		if (weight < 150 && weight >0)
		{
			printf("���߸��� ������ �峭���� ���ÿ� ~ ^^\n\n");
			return 0;
		}
		else if (weight > 500)
		{
			printf("Ÿ���� ������ �峭���� ���ÿ� ~ ^^\n\n");
			return 0;
		}
		else
		{
			count++;
			printf("���� �ް��� �� : %d\n\n", count);
			return 1;
		}
		
}