#include<stdio.h>
#include<string.h>

void myflush(void);
void inputString(char *find_ch, char *string, int size);
int strcheck(char *str, char ch);

int main()
{
	char str[100];
	int size = sizeof(str) / sizeof(str[0]);
	char find_ch;
	int check;

	while (1)
	{
		inputString(&find_ch, str, size);
		if (strcmp(str, "end") == 0) break;
		check = strcheck(str, find_ch);
		if (check == -1) printf("\"%s\"문자열 안에 \'%c\'문자는 존재하지 않습니다.\n\n", str, find_ch);
		else printf("\"%s\"문자열 안에 \'%c\'문자는 %d번 위치에 존재합니다.(0번부터 시작)\n\n", str, find_ch,check);
	}

	return 0;
}

void myflush(void)
{
	char ch;

	while (ch = getchar() != '\n');
}

void inputString(char *find_ch,char *string, int size)
{
	printf("# 문자열을 입력하시오 : ");
	fgets(string, size, stdin);
	string[strlen(string) - 1] = '\0';
	if (strcmp(string, "end") == 0) return;
	printf("# 문자를 입력하시오 : ");
	scanf("%c", find_ch);
	myflush();
}

int strcheck(char *str, char find_ch)
{
	int cnt = -1;
	int i;
	int len ;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		cnt++;

		if (*(str + i) == find_ch)
		{
			return cnt;
		}
	}

	return -1;
}