#include<stdio.h>

double inputHeight(void);
double inputWeight(void);
double bmiCalculate(double height, double weight);
void outputBmi(double bmi);

int main(void)
{
	double height = 0, weight = 0;
	double bmi;


	height = inputHeight();
	weight = inputWeight();
	bmi = bmiCalculate(height, weight);
	outputBmi(bmi);
	 
	return 0;
}

double inputHeight(void)
{
	double height;

	printf("키를 입력하세요(m) : ");
	scanf("%lf", &height);

	return height;
}
double inputWeight(void)
{
	double weight;
	
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &weight);

	return weight;
}
double bmiCalculate(double height, double weight)
{
	double bmi;

	bmi = weight / (height*height);

	return bmi;
}

void outputBmi(double bmi)
{
	if (bmi < 18.5&& bmi>=0) {
		printf("당신의 BMI는 %.1lf으로 저체중입니다.\n", bmi);
	}
	else if (bmi >= 18.5 && bmi < 25.0) {
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n", bmi);
	}
	else if (bmi >= 25.0 && bmi < 30.0) {
		printf("당신의 BMI는 %.1lf으로 과체중입니다.\n", bmi);
	}
	else if (bmi >= 30.0 && bmi < 40.0) {
		printf("당신의 BMI는 %.1lf으로 비만입니다.\n", bmi);
	}
	else if (bmi >= 40.0 ) {
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n", bmi);
	}
}