#include<stdio.h>

int inputWorktime(void);
int calculateGlosspay(int worktime);
int calculateTax(int gloss_pay);
void outputResult(int gloss_pay, int tax);

int main(void)
{
	int worktime, gloss_pay, tax;

	worktime = inputWorktime();
	gloss_pay = calculateGlosspay(worktime);
	tax = calculateTax(gloss_pay);
	outputResult(gloss_pay, tax);

	return 0;
}

int inputWorktime(void)
{
	int worktime;

	printf("*1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &worktime);

	return worktime;
}

int calculateGlosspay(int worktime)
{
	int hour_pay = 3000,time_line = 40;
	double overtime_pay = 0.0;
	int gloss_pay = 0;

	if (worktime > time_line)
	{
		overtime_pay = (double)(worktime - time_line) * ((double)hour_pay * 1.5);
		gloss_pay = (time_line * hour_pay) + (int)overtime_pay;
	}
	else
	{
		gloss_pay = worktime * hour_pay;
	}

	return (int)gloss_pay;
}

int calculateTax(int gloss_pay)
{
	double tax=0;

	if (gloss_pay > 100000)
	{
		tax += 100000.0 * 0.15;
		tax += (double)(gloss_pay - 100000) * 0.25;
	}
	else
	{
		tax += (double)gloss_pay * 0.15;
	}

	return (int)tax;
}

void outputResult(int gloss_pay, int tax)
{
	printf("#총수입 : %d원\n", gloss_pay);
	printf("#세  금 : %d원\n", tax);
	printf("#실수입 : %d원\n", gloss_pay - tax);
}