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
			printf("*** 달걀 포장이 끝났습니다\n\n");
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
		printf("계란의 무게를 입력하세요(단위 : g) : ");
		check = scanf("%d", &weight);

		if (check == 1)
		{
			myflush();
			break;
		}

		printf("잘못 입력되었습니다. 다시 입력해주세요.\n\n");
		myflush();
	}

	return weight;
}

int outputResult(int weight,int count)
{

		if (weight < 150 && weight >0)
		{
			printf("메추리알 가지고 장난하지 마시오 ~ ^^\n\n");
			return 0;
		}
		else if (weight > 500)
		{
			printf("타조알 가지고 장난하지 마시오 ~ ^^\n\n");
			return 0;
		}
		else
		{
			count++;
			printf("현재 달걀의 수 : %d\n\n", count);
			return 1;
		}
		
}