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
		if (check == -1) printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� �������� �ʽ��ϴ�.\n\n", str, find_ch);
		else printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� %d�� ��ġ�� �����մϴ�.(0������ ����)\n\n", str, find_ch,check);
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
	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	fgets(string, size, stdin);
	string[strlen(string) - 1] = '\0';
	if (strcmp(string, "end") == 0) return;
	printf("# ���ڸ� �Է��Ͻÿ� : ");
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