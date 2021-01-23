#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* 주민등록번호 길이*/

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(char *resident_number);

int main()
{
	/* 테스트할 주민등록번호 저장 배열*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	printf("**********정혜경 C언어 HW60**********\n");
	/* 검사할 주민등록번호의 개수 계산*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i < count; i++) /* 주민등록번호 유효성 검사를 반복적으로 수행 함*/
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
/*----------------------------------------------------------------
  availabilityCheck()함수: 주민등록번호 유효성 검사 함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 유효하면TRUE, 유효하지 않으면FALSE 리턴
------------------------------------------------------------------*/
int availabilityCheck(char *resident_number)
{
	if (checkLengthCharacter(resident_number) == TRUE && checkDate(resident_number)==TRUE && checkIdentification(resident_number)==TRUE)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*-------------------------------------------------------------------------
  checkLengthCharacter()함수: 주민등록번호 길이 및 문자 유효성검사 함수
  전달인자: 검사할 주민등록번호(문자열)
  리턴값: 주민등록번호의 길이가 맞고 숫자문자로만 구성되어 있으면TRUE,
		   길이가 짧거나 길고, 숫자 문자가 아닌 문자가 섞여 있으면FALSE 리턴
--------------------------------------------------------------------------*/
int checkLengthCharacter(char *resident_number)
{
	int count = 0; 
	for (int i = 0; i < strlen(resident_number); i++)
	{
		if (resident_number[i] > 47 && resident_number[i] < 58)
		{
			count++;
		}
	}
	if (count == 13)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*----------------------------------------------------------------
  checkDate()함수: 첫6자리(연,월,일)의 유효성 검사 함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 유효한 날짜이면TRUE, 유효하지 않은 날짜이면FALSE 리턴
------------------------------------------------------------------*/
int checkDate(char *resident_number)
{
	int  year, month, date;
	year = (resident_number[0] - '0') * 10 + (resident_number[1] - '0');
	month = (resident_number[2] - '0') * 10 + (resident_number[3] - '0');
	date = (resident_number[4] - '0') * 10 + (resident_number[5] - '0');

	if (month > 12 || month < 1)
	{
		return FALSE; // 윤평년 & 젠더
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (checkGender(resident_number) == TRUE && checkYear(resident_number) == TRUE)
			{
				if (month == 2 && date < 30)
				{
					return TRUE;
				}
				else if (date < 32 && date >= 1)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}			
			}
			else if (checkGender(resident_number) == TRUE && checkYear(resident_number) == FALSE)
			{
				if (date < 31 && date >= 1)
					{
					return TRUE;
					}
				else
					{
					return FALSE;
					}
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			if (checkGender(resident_number) == TRUE && checkYear(resident_number) == TRUE)
			{
				if (month == 2 && date < 30)
				{
					return TRUE;
				}
				else if (date < 31 && date >= 1)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
			else if (checkGender(resident_number) == TRUE && checkYear(resident_number) == FALSE)
			{
				if (month == 2 && date > 28)
				{
					return FALSE;
				}
				else if (date < 32 && date >= 1)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
			else
			{
				return FALSE;
			}
		}
	}
}
/*----------------------------------------------------------------------
  checkGender()함수: 7번째 자리의 성별식별번호 유효성 검사함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 성별식별번호가'1'~'4'이면TRUE, 그 외 숫자 문자이면FALSE 리턴
-----------------------------------------------------------------------*/
int checkGender(char *resident_number)
{
	int num = resident_number[6] - '0';
	if (num == 1 || num == 2 || num == 3 || num == 4)
	{
		return TRUE;
	}
	else return FALSE;
}
/*------------------------------------------------------------------------
  checkIdentification()함수: 주민등록번호 끝자리(인식자) 유효성 검사 함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 유효한 인식자이면TRUE, 유효하지 않은 인식자이면 FALSE 리턴
-------------------------------------------------------------------------*/
int  checkIdentification(char *resident_number)
{
	int sum = 0, res;
	for (int i = 0; i < strlen(resident_number) - 1; i++)
	{
		sum += (resident_number[i]-'0');
	}
	res = sum % 10;
	if (res == (resident_number[12]-'0'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*----------------------------------------------------------------
 checkYear ()함수: 년도의 윤,평년 여부 검사
  전달인자: 윤,평년 검사할 년도
  리턴값: 윤년이면 TRUE, 평년이면FALSE 리턴
------------------------------------------------------------------*/
int checkYear(char *resident_number)
{
	int year = (resident_number[0] - '0') * 10;
	year += (resident_number[1] - '0');

	if (checkGender(resident_number) == TRUE)
	{
		if (resident_number[6] - '0' == 1 || resident_number[6] - '0' == 2)
		{
			year += 1900;
			if ((year % 4) == 0)
			{
				if ((year % 100) == 0)
				{
					if ((year % 400) == 0)
					{
						return TRUE;
					}
					else
					{
						return FALSE;
					}
				}
				else
				{
					return TRUE;
				}
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			year += 2000;
			if ((year % 4) == 0)
			{
				if ((year % 100) == 0)
				{
					if ((year % 400) == 0)
					{
						return TRUE;
					}
					else
					{
						return FALSE;
					}
				}
				else
				{
					return TRUE;
				}
			}
			else
			{
				return FALSE;
			}
		}
	}
	else
		return FALSE;
}



