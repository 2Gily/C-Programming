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

	printf("# ���� ������ �Է� �Ͻÿ� : \n");

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

	printf("* ������ ��ҹ��� ���� : %d��\n", alphabet);
	printf("* ���ڹ��� ���� : %d��\n", number);
	printf("* ���鹮��(space, tab, enter) ���� : %d��\n", separator);
	printf("* �� �� ��Ÿ���� ���� : %d��\n", etc);

	return 0;
}

void myflush(void)
{
	char ch;

	while (ch = getchar() != '\n');
}