#include<stdio.h>

int main()
{
	int num;
	int i, j,k;
	i = 0;
	k = 0;
	j = 19;
	int check = 1;

	printf("숫자 입력(1부터 30까지) : ");
	scanf("%d", &i);

	while(check)
	{
		k++;

		if (i>j)
		{
			printf("%d 보다 작습니다.",i);
			printf("숫자 입력(1부터 30까지) : ");
			scanf("%d", &i);
			
		}
		else if (i < j)
		{
			printf("%d 보다 큽니다.", i);
			printf("숫자 입력(1부터 30까지) : ");
			scanf("%d", &i);
			
		}
		else if (i == j)
		{
			check = 0;
		}
	}
	printf("\n\n");
	printf("정답입니다.\n");
	printf("시도한 횟수 : %d \n", k);

	return 0;
}