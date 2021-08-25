#include<stdio.h>

int main(void)
{
	char day;

	printf("요일을 입력해주세요: ");
	scanf("%c", &day);

	switch (day)
	{
	case'M':
		printf("평일입니다.\n");
		break;
	case'm':
		printf("평일입니다.\n");
		break;
	case'T':
		printf("평일입니다.\n");
		break;
	case't':
		printf("평일입니다.\n");
		break;
	case'W':
		printf("평일입니다.\n");
		break;
	case'w':
		printf("평일입니다.\n");
		break;
	case'H':
		printf("평일입니다.\n");
		break;
	case'h':
		printf("평일입니다.\n");
		break;
	case'F':
		printf("평일입니다.\n");
		break;
	case'f':
		printf("평일입니다.\n");
		break;
	case'S':
		printf("주말입니다.\n");
		break;
	case's':
		printf("주말입니다.\n");
		break;
	case'N':
		printf("주말입니다.\n");
		break;
	case'n':
		printf("주말입니다.\n");
		break;
	default : 
		printf("요일이 아닙니다.\n");
			break;


	}


}