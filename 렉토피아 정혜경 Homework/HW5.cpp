#include<Stdio.h>

double inputUsage(void);
double calculatorFee(double usage);
void outputUsageFee(double calculated_fee);

int main(void)
{
	double usage_fee,calculated_fee;

	usage_fee = inputUsage();
	calculated_fee = calculatorFee(usage_fee);
	outputUsageFee(calculated_fee);

	return 0;
}
double inputUsage(void)
{
	double usage;

	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%lf", &usage);

	return usage;
}
double calculatorFee(double usage)
{
	double basicfee = 660.0, per_usagefee = 88.5;
	double fullfee, tax, calculated_usagefee;

	fullfee = basicfee + (usage * per_usagefee);
	tax = fullfee * 0.09;
	calculated_usagefee = fullfee + tax;

	return calculated_usagefee;
}

void outputUsageFee(double calculated_fee)
{
	printf("전기 사용요금은 %lf원 입니다.\n", calculated_fee);
}