#include<Stdio.h>
#include<string.h>

int main(void)
{
	char last_name[100];
	char first_name[100];

	int last_name_length;
	int first_name_length;
	
	printf("#성을 입력하시오 : ");
	fgets(last_name,sizeof(last_name),stdin);

	last_name[strlen(last_name)-1] = '\0';
	last_name_length = strlen(last_name);

	printf("#이름을 입력하시오 : ");
	fgets(first_name, sizeof(last_name), stdin);

	first_name[strlen(first_name) - 1] = '\0';
	first_name_length = strlen(first_name);

	printf("%s %s\n%*d %*d\n", last_name, first_name, last_name_length, last_name_length, first_name_length, first_name_length);

	return 0;
}