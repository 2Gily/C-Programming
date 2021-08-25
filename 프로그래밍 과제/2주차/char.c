#include<stdio.h>

int main()
{
	char a,b;

	printf("문자 입력 : ");

	scanf("%c", &a);

	printf("%c문자의 아스키 코드값은 %d입니다.\n\n", a, a);
	
	return 0;

}