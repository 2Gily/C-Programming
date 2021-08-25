#include <stdio.h>
#include <string.h>

int main()
{
	char state[80];
	char word[80];
	char *ps = state;
	int cnt;

	printf("문장 입력:");
	gets(state);

	while (1) {
		printf("단어 입력: ");
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
		printf("   검색결과 %s는 %d 개...\n", word, cnt);
	}

	return 0;
}