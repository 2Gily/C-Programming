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

	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	scanf("%d", &height);

	while (height < 0) 
	{
			printf("Warning : �칰�� ���̴� ������ �� �����ϴ�. �ٽ� �Է����ּ���.\n\n");
			printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
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

	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", meter_height, day);
}