#include<stdio.h>
#include<string.h>
#define MYFLUSH { while(getchar()!='\n'); }

void inputString(char(*str)[20], int str_size);
void sortString(char(*str)[20], int str_size);
void outputResult(char(*str)[20], int str_size);

int main(void)
{
	char str[5][20];
	int str_size;
	int char_size;

	str_size = sizeof(str) / sizeof(str[0]);

	inputString(str, str_size);
	sortString(str, str_size);
	outputResult(str, str_size);

	return 0;
}

void inputString(char(*str)[20], int str_size)
{
	int i;
	char temp_str[20];

	for (i = 0; i < str_size; i++) {
		printf("# %d번 문자열을 입력하시오 : ", i + 1);
		scanf("%s", temp_str);
		strcpy(*(str + i), temp_str);
		MYFLUSH;
	}

}

void sortString(char(*str)[20], int str_size)
{
	int i, j;
	int check;
	char temp_str[20];

	for (i = 0; i < str_size; i++) {
		for (j = 0; j < str_size - i - 1; j++) {
			if (strcmp(str[j], str[j + 1]) > 0) {
				strcpy(temp_str, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], temp_str);
			}
		}
	}
}

void outputResult(char(*str)[20], int str_size)
{
	int i;

	for (i = 0; i < str_size; i++) {
		printf("str[%d] = %s  %c  %c\n", i, *(str + i), **(str + i), *(*(str + i) + strlen(*(str + i)) - 1));
	}
}