#include<stdio.h>
#define SIZE 100

int main(void)
{
	int i;
	char multiple_of_3 = '*';
	char multiple_of_5 = '#';

	for (i = 1; i <= SIZE; i++)
	{
		
		if (i % 3 == 0 && i % 5 !=0) printf("%4c", multiple_of_3);
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%4c", multiple_of_5);
			if (i % 10 == 0) printf("\n");
		}
		else
		{
			printf("%4d", i);
			if (i % 10 == 0) printf("\n");
		}
	}

	return 0;
}