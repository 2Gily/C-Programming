#include <stdio.h>
#include <string.h>

int main()
{
	char state[80];
	char word[80];
	char *ps = state;
	int cnt;

	printf("���� �Է�:");
	gets(state);

	while (1) {
		printf("�ܾ� �Է�: ");
		gets(word);
		if (strcmp(word, "end") == 0)
			break;
		cnt = 0;
		ps = state;
		while (1) {
			if (*ps == '\0')
				break;
			if (strncmp(ps, word, strlen(word)) == 0) 
			{ 
				cnt++;
				ps = ps + strlen(word);
			}
			else ps++;
		}
		printf("   �˻���� %s�� %d ��...\n", word, cnt);
	}

	return 0;
}