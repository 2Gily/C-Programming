#include <stdio.h>

int check_same(int *, int*);

int main()
{
	int lotto_nums[6] = { 4, 16, 25, 38, 41, 45 };
	int my[6], res;
	int i;

	printf("번호: ");
	for (i = 0; i < 6; i++) {
		scanf("%d", my + i);
	}
	res = check_same(lotto_nums, my);
	printf("\n\n");
	switch (res) {
	case 3:
		printf("4등\n");
		break;
	case 4:
		printf("3등\n");
		break;
	case 5:
		printf("2등\n");
		break;
	case 6:
		printf("1등\n");
		break;
	default:
		printf("꽝\n");
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