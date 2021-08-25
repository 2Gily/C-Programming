#include<stdio.h>
#include<string.h>
#define MYFLUSH { while(getchar()!='\n'); }

int inputString(char *pstr);
int findNumber(char *pstr, int len);
void outputResult(char *pstr, int sum);

int main()
{
	char str[100];
	int len, sum;

	while ("Haappy") {
		len = inputString(str);
		if (strcmp(str, "end") == 0) break;
		sum = findNumber(str, len);
		outputResult(str, sum);
	}

	return 0;
}

int inputString(char *pstr)
{
	printf("# 문장을 입력하시오 : ");
	scanf("%s", pstr);
	MYFLUSH;

	return strlen(pstr);
}

int findNumber(char *pstr, int len)
{
	int i, count = 0;
	int sum = 0;
	int temp_sum[100] = { 0, };

	for (i = 0; i < len; i++)
	{
		if (*(pstr + i) >= '0' && *(pstr + i) <= '9') 
		{
			temp_sum[count] += *(pstr + i) - '0';
			if (*(pstr + i + 1) >= '0' && *(pstr + i + 1) <= '9') 
			{
				temp_sum[count] *= 10;
			}
			else count++;
		}
	}
	for (i = 0; i < count; i++) sum += temp_sum[i];

	return sum;
}

void outputResult(char *pstr, int sum)
{
	printf("\"%s\" 내의 총 숫자는 [%d]입니다.\n\n",pstr, sum);
}
