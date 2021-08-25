#include<Stdio.h>
#include<string.h>

void myflush(void);

int main(void)
{
	char ch;
	int alphabet = 0;
	int number = 0;
	int separator = 0;
	int etc = 0;

	printf("# 영문 문장을 입력 하시오 : \n");

	ch = getchar();

	do
	{
		if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
		{
			alphabet++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			number++;
		}
		else if ( ch == '\t' || ch == ' '|| ch == '\n')
		{
			separator++;
		}
		else etc++;
	} while ((ch = getchar()) != EOF);

	printf("* 영문자 대소문자 개수 : %d개\n", alphabet);
	printf("* 숫자문자 개수 : %d개\n", number);
	printf("* 여백문자(space, tab, enter) 개수 : %d개\n", separator);
	printf("* 그 외 기타문자 개수 : %d개\n", etc);

	return 0;
}

void myflush(void)
{
	char ch;

	while (ch = getchar() != '\n');
}