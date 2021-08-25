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

	while ("7월 17일") {
		printf("년 월 일을 입력하시오 : ");
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
					printf("!! %d년은 윤년이 아니므로 2월 29일이 존재하지 않습니다. 다시 입력해주세요.\n\n", *year);
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
		day = "일요일";
		break;

	case 1:
		day = "월요일";
		break;

	case 2:
		day = "화요일";
		break;

	case 3:
		day = "수요일";
		break;

	case 4:
		day = "목요일";
		break;

	case 5:
		day = "금요일";
		break;

	case 6:
		day = "토요일";
		break;

	default:;
	}
	printf("%d년 %d월 %d일은 %s입니다.\n", year, month, data, day);
}