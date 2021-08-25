#include<stdio.h>

void myflush(void);
void outputLine(void); // ���м��� ����ϴ� �Լ�
int menu(void);
void openFan(unsigned char* fan_state);
void offFan(unsigned char* fan_state);
void reverseFan(unsigned char* fan_state);
void displayFan(unsigned char* fan_state);

int main(void)
{
	int menu_num;
	unsigned char fan_state = 0;

	while (1)
	{
		menu_num = menu();

		switch (menu_num)
		{
			case 1:
			{
				openFan(&fan_state);
				displayFan(&fan_state);
				break;
			}
			case 2:
			{
				offFan(&fan_state);
				displayFan(&fan_state);
				break;
			}
			case 3:
			{
				reverseFan(&fan_state);
				displayFan(&fan_state);
				break;
			}
			default:
			{
				break;
			}
		}

		if (menu_num == 4) break;
	}

	return 0;
}

void myflush(void)
{
	char ch;
	while (ch = getchar() != '\n');
}

void outputLine(void) // ���м��� ����ϴ� �Լ�
{
	int i = 0;
	int field_size = 66;

	for (i = 0; i <= field_size; i++)
	{
		if(i == 0) printf("\n");

		printf("-");

		if (i == field_size) printf("\n");
	}
}

int menu(void)
{
	int menu_num;
	int check;
	
	while(1)
	{
		printf("\n1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
		check = scanf("%d", &menu_num);

		if ((menu_num >= 1 && menu_num <= 4) && check == 1)
		{
			myflush();
			return menu_num;
		}
		printf("\n* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n"); 
		myflush();
	}
}

void openFan(unsigned char* fan_state) 
{
	unsigned char on_fan;
	
	outputLine();
	printf("\n%45s\n","Fan ���� �۾� ���� ȭ��");
	outputLine();

	printf("\n* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");

	while (1)
	{
		scanf("%hhu", &on_fan);

		if (on_fan >= 1 && on_fan <= 8)
		{
			*fan_state = *fan_state | (unsigned char)1 << --on_fan;
			myflush();
			break;
		}
		printf("\n* �߸� �Է��Ͽ����ϴ�. 1 ~ 8 ������ ������ �Է����ּ��� : ");
		myflush();
	}
}

void offFan(unsigned char* fan_state)
{
	unsigned char off_fan;

	outputLine();
	printf("\n%45s\n", "Fan �ݱ� �۾� ���� ȭ��");
	outputLine();

	printf("\n* CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");

	while (1)
	{
		scanf("%hhu", &off_fan);

		if (off_fan >= 1 && off_fan <= 8)
		{
			*fan_state = *fan_state & ~((unsigned char)1) << --off_fan;
			myflush();
			break;
		}
		printf("\n* �߸� �Է��Ͽ����ϴ�. 1 ~ 8 ������ ������ �Է����ּ��� : ");
		myflush();
	}
}

void reverseFan(unsigned char* fan_state)
{
	outputLine();
	printf("\n%45s\n", "Fan ��ü ��ȯ �۾� ���� ȭ��");
	outputLine();
	printf("\n��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON, OFF ���� �ڹٲ�)\n");
	*fan_state = *fan_state ^ (unsigned char)255;
}

void displayFan(unsigned char* fan_state)
{
	int i;

	outputLine();
	printf("\n 8��FAN  7��FAN  6��FAN  5��FAN  4��FAN  3��FAN  2��FAN  1��FAN\n");
	for (i = 7; i >= 0; i--)
	{
		if ((*fan_state & 1 << i) == (1 << i))
		{
			printf("%6s  ","ON");
		}
		else
		{
			printf("%6s  ", "OFF");
		}

		if (i == 0) printf("\n");
		
	}
	outputLine();
}