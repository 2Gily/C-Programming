#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* 주민등록번호 길이*/
#include<stdio.h>
#include<string.h>

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i < count; i++)
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		}
		else
		{
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
		}
	}
	return 0;
}

int availabilityCheck(char *resident_number)
{
	if (checkLengthCharacter(resident_number) != TRUE) return FALSE;
	if (checkDate(resident_number) != TRUE) return FALSE;
	if (checkGender(resident_number) != TRUE) return FALSE;
	if (checkIdentification(resident_number) != TRUE) return FALSE;

	return TRUE;
}

int checkLengthCharacter(char *resident_number)
{
	int length_character;
	int i;

	length_character = strlen(resident_number);

	if (length_character != RESIDENT_NUMBER_LENGTH) return FALSE;
	else {
		for (i = 0; i < length_character; i++) {
			if (resident_number[i] < '0' || resident_number[i] > '9') {
				return FALSE;
			}
		}
		return TRUE;
	}

}

int checkDate(char *resident_number)
{
	int year = 0, month = 0, date = 0;
	int ary_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (resident_number[6] == '1' || resident_number[6] == '2') {
		year += 1900;
	}
	else if (resident_number[6] == '3' || resident_number[6] == '4') {
		year += 2000;
	}

	year += (resident_number[0] - '0') * 10 + (resident_number[1] - '0');
	month += (resident_number[2] - '0') * 10 + (resident_number[3] - '0');
	date += (resident_number[4] - '0') * 10 + (resident_number[5] - '0');

	if (month == 2 && date == 29) {
		if (checkYear(year) == TRUE) return TRUE;
		else return FALSE;
	}
	if (date < ary_month[month - 1] + 1 && date > 0) return TRUE;
	else return FALSE;

}

int checkGender(char *resident_number)
{
	if (resident_number[6] > '0' && resident_number[6] < '5') return TRUE;
	else return FALSE;
}

int checkIdentification(char *resident_number)
{
	int temp_sum = 0;
	int check_number;
	int i;

	for (i = 0; i < RESIDENT_NUMBER_LENGTH - 1; i++)
	{
		temp_sum += resident_number[i] - '0';
	}

	check_number = temp_sum % 10;

	if (check_number == (resident_number[RESIDENT_NUMBER_LENGTH - 1] - '0')) return TRUE;
	else return FALSE;
}

int checkYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return TRUE;
	else return FALSE;
}