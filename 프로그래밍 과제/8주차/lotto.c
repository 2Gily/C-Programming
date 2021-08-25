#include <stdio.h>

int check_same(int *, int*);

int main()
{
	int lotto_nums[6] = { 4, 16, 25, 38, 41, 45 };
	int my[6], res;
	int i;

	printf("��ȣ: ");
	for (i = 0; i < 6; i++) {
		scanf("%d", my + i);
	}
	res = check_same(lotto_nums, my);
	printf("\n\n");
	switch (res) {
	case 3:
		printf("4��\n");
		break;
	case 4:
		printf("3��\n");
		break;
	case 5:
		printf("2��\n");
		break;
	case 6:
		printf("1��\n");
		break;
	default:
		printf("��\n");
		break;
	}
	return 0;
}


int check_same(int l[], int m[])
{
	int i, j;
	int cnt = 0;
	int *s = l;

	for (i = 0; i < 6; i++) {
		l = s;
		for (j = 0; j < 6; j++) {
			if (*l == *m)
				cnt++;
			l++;
		}
		m++;
	}

	return cnt;
}