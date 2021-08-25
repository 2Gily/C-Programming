#include<stdio.h>

int inputDistance(void);
int calculateEscape(int height);
void outputResult(int height, int day);

int main(void)
{
	int height, day;

	height = inputDistance();
	day = calculateEscape(height);
	outputResult(height, day);
	
	return 0;
}

int inputDistance(void)
{
	int height;

	printf("우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &height);

	while (height < 0) 
	{
			printf("Warning : 우물의 깊이는 음수일 수 없습니다. 다시 입력해주세요.\n\n");
			printf("우물의 깊이를 입력하시오(cm단위) : ");
			scanf("%d", &height);
			if (height > 0) break;
	}

	return height;
}

int calculateEscape(int height)
{
	int day=0;
	while (height > 0)
	{
		height -= 50;
		day++;
		if (height <= 0)
		{
			break;
		}
		else
		{
			height += 20;
		}
	}
	
	return day;
}

void outputResult(int height,int day)
{
	double meter_height = (double)height / 100.0;

	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", meter_height, day);
}