#include<stdio.h>

int main()
{

	int ddo = 2, ggo = 3;
	int W500, W100, W50, W10, sum, change,none;
	sum = (ddo * 70) + (ggo * 30);
	change = 1000 - sum;
	W500 = change / 500;
	none = change % 500;
	W100 = none / 100;
	none = none % 100;
	W50 = none / 50;
	none = none % 50;
	W10 = none / 10;

	printf("�ǶǸ� ��ü �ݾ� : %d��\n", ddo * 70);
	printf("�ǲǹ� ��ü �ݾ� : %d��\n", ggo * 30);
	printf("�Ž����� : %d��\n", change);
	printf("�Ž����� ������ �ּ� ���� ...\n");
	printf("500�� %d��, 100�� %d�� , 50�� %d��, 10�� %d�� \n",W500,W100,W50,W10 );

	return 0;

}