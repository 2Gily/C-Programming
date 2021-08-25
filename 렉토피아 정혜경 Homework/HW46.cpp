#include<stdio.h>
#define MYFLUSH { while(getchar()!='\n'); }

int yearCheck(int year);
void inputDay(int *year, int *month, int *data, int *ary_month);
int transDay(int year, int month, int data, int *ary_month);
void outputResult(int year, int month, int data,int trans_day);

int main(void)
{
	int year, month, data;
	int ary_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	inputDay(&year, &month, &data, ary_month);
	outputResult(year, month, data, transDay(year, month, data, ary_month));

	return 0;
}

int yearCheck(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return 1;
	else return 0;
}

void inputDay(int *year, int *month, int *data, int *ary_month)
{

	while ("7�� 17��") {
		printf("�� �� ���� �Է��Ͻÿ� : ");
		if (scanf("%d %d %d", year, month, data) != 3) {
			MYFLUSH;
			continue;
		}

		if (*year > 1899 && (*month > 0 && *month < 13)) {
			if (*month == 2 && *data == 29) {
				if (yearCheck(*year) == 1) {
					MYFLUSH;
					break;
				}
				else {
					printf("!! %d���� ������ �ƴϹǷ� 2�� 29���� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���.\n\n", *year);
					MYFLUSH;
					continue;
				}
			}
			else if (*data > 0 && *data < *(ary_month + (*month - 1)) + 1) break;
			else {
				MYFLUSH;
				continue;
			}
		}
	}
}

int transDay(int year, int month, int data, int *ary_month)
{
	int trans_day = 0;
	int i;

	for (i = 1900; i < year; i++) {
		if (yearCheck(i) == 1) {
			trans_day += 366;
		}
		else trans_day += 365;
	}
	for (i = 0; i < month - 1; i++) {
		trans_day += *(ary_month + i);
	}
	if (month > 2 && yearCheck(year) == 1) trans_day++;

	trans_day += data;

	return trans_day;
}

void outputResult(int year, int month, int data, int trans_day)
{
	char *day;

	switch (trans_day % 7) {
	case 0:
		day = "�Ͽ���";
		break;

	case 1:
		day = "������";
		break;

	case 2:
		day = "ȭ����";
		break;

	case 3:
		day = "������";
		break;

	case 4:
		day = "�����";
		break;

	case 5:
		day = "�ݿ���";
		break;

	case 6:
		day = "�����";
		break;

	default:;
	}
	printf("%d�� %d�� %d���� %s�Դϴ�.\n", year, month, data, day);
}