#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MYFLUSH { while(getchar()!='\n'); }

int inputString(char *pstr);
int checkPalindrome(char *pstr, int len);
void outputResult(char *pstr, int check);

int main(void)
{
	char str[100];
	char org_str[100];
	int len, check;

	while (1) {
		len = inputString(str);
		strcpy(org_str, str);
		if (strcmp(str, "end") == 0) break;
		check = checkPalindrome(str, len);
		outputResult(org_str, check);
	}
	return 0;
}

int inputString(char *pstr)
{
	printf("# 단어 입력 : 
		
		");
	scanf("%s", pstr);
	//MYFLUSH;

	return strlen(pstr);
}

int checkPalindrome(char *pstr, int len)
{
	int i;

	for (i = 0; i < len; i++) {
		*(pstr + i) = toupper(*(pstr + i));
	}
	for (i = 0; i < len / 2; i++) {
		if (pstr[i] != pstr[len - i - 1]) return 0;
	}
	return 1;
}

void outputResult(char *pstr ,int check)
{
	switch (check) {
	case 0:
		printf("\"%s\" : 회문이 아닙니다!\n", pstr);
		break;
	case 1:
		printf("\"%s\" : 회문입니다!\n", pstr);
		break;
	default:;
	}
	printf("\n\n");
}