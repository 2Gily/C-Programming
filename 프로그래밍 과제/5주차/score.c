#include <stdio.h>
#include <string.h>

int main(void)
{
	int score[5];
	int max, min, tot = 0;
	int max_index, min_index;
	int i;
	double avg;

	printf("5명 심사위원의 점수 입력 : ");
	for (i = 0; i<5; i++)
	{
		scanf("%d", &score[i]);
	}

	max = min = score[0];         
	max_index = min_index = 0;    
	for (i = 1; i<5; i++)
	{
		if (score[i] > max)
		{
			max = score[i];
			max_index = i;
		}
		if (score[i] < min)
		{
			min = score[i];      
			min_index = i;
		}
	}

	printf("유효점수 : ");
	for (i = 0; i<5; i++)
	{
		if ((i == max_index) || (i == min_index)) continue;  
		printf("%5d", score[i]);                            
		tot += score[i];                                     
	}
	printf("\n");

	printf("평균 : %.1lf\n", tot / 3.0);    

	return 0;
}
