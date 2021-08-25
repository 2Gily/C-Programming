#include <stdio.h>
#include <string.h>
void swap_ptr(char **pa, char **pb);

int main()

{
	char *pstr[] = { "soccer", "golf", "pingpong", "carom", "tennis", "badminton" };
	int i, j, size;

	size = sizeof(pstr) / sizeof(pstr[0]);

	printf("정렬 전 : \n");
	for (int i = 0; i < size; i++) {
		puts(pstr[i]);
	}

	for (i = 0; i < size - 1; i++) {
		for (j = 1; j < size - i; j++) {
			if (strcmp(pstr[j - 1], pstr[j])>0)
				swap_ptr(&pstr[j], &pstr[j - 1]);
		}
	}
	printf("\n정렬 후 : \n");
	for (i = 0; i < size; i++) {
		puts(pstr[i]);
	}

	return 0;
}

void swap_ptr(char **pa, char **pb)
{
	char * temp;

	temp = *pb;
	*pb = *pa;
	*pa = temp;
}
