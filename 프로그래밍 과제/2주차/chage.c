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

	printf("또또면 전체 금액 : %d원\n", ddo * 70);
	printf("꽁꽁바 전체 금액 : %d원\n", ggo * 30);
	printf("거스름돈 : %d원\n", change);
	printf("거스름돈 동전의 최소 개수 ...\n");
	printf("500원 %d개, 100원 %d개 , 50원 %d개, 10원 %d개 \n",W500,W100,W50,W10 );

	return 0;

}