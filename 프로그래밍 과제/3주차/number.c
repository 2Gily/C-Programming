#include<stdio.h>

int main()
{
	int num;
	int i, j,k;
	i = 0;
	k = 0;
	j = 19;
	int check = 1;

	printf("���� �Է�(1���� 30����) : ");
	scanf("%d", &i);

	while(check)
	{
		k++;

		if (i>j)
		{
			printf("%d ���� �۽��ϴ�.",i);
			printf("���� �Է�(1���� 30����) : ");
			scanf("%d", &i);
			
		}
		else if (i < j)
		{
			printf("%d ���� Ů�ϴ�.", i);
			printf("���� �Է�(1���� 30����) : ");
			scanf("%d", &i);
			
		}
		else if (i == j)
		{
			check = 0;
		}
	}
	printf("\n\n");
	printf("�����Դϴ�.\n");
	printf("�õ��� Ƚ�� : %d \n", k);

	return 0;
}