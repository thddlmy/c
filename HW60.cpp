#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* �ֹε�Ϲ�ȣ ����*/

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(char *resident_number);

int main()
{
	/* �׽�Ʈ�� �ֹε�Ϲ�ȣ ���� �迭*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	printf("**********������ C��� HW60**********\n");
	/* �˻��� �ֹε�Ϲ�ȣ�� ���� ���*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i < count; i++) /* �ֹε�Ϲ�ȣ ��ȿ�� �˻縦 �ݺ������� ���� ��*/
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) �ֹι�ȣ%s��(��) ��ȿ�� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
		else
		{
			printf("(-) �ֹι�ȣ%s��(��) ��ȿ���� ���� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
  availabilityCheck()�Լ�: �ֹε�Ϲ�ȣ ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�ϸ�TRUE, ��ȿ���� ������FALSE ����
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
  checkLengthCharacter()�Լ�: �ֹε�Ϲ�ȣ ���� �� ���� ��ȿ���˻� �Լ�
  ��������: �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �ֹε�Ϲ�ȣ�� ���̰� �°� ���ڹ��ڷθ� �����Ǿ� ������TRUE,
		   ���̰� ª�ų� ���, ���� ���ڰ� �ƴ� ���ڰ� ���� ������FALSE ����
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
  checkDate()�Լ�: ù6�ڸ�(��,��,��)�� ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� ��¥�̸�TRUE, ��ȿ���� ���� ��¥�̸�FALSE ����
------------------------------------------------------------------*/
int checkDate(char *resident_number)
{
	int  year, month, date;
	year = (resident_number[0] - '0') * 10 + (resident_number[1] - '0');
	month = (resident_number[2] - '0') * 10 + (resident_number[3] - '0');
	date = (resident_number[4] - '0') * 10 + (resident_number[5] - '0');

	if (month > 12 || month < 1)
	{
		return FALSE; // ����� & ����
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
  checkGender()�Լ�: 7��° �ڸ��� �����ĺ���ȣ ��ȿ�� �˻��Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �����ĺ���ȣ��'1'~'4'�̸�TRUE, �� �� ���� �����̸�FALSE ����
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
  checkIdentification()�Լ�: �ֹε�Ϲ�ȣ ���ڸ�(�ν���) ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� �ν����̸�TRUE, ��ȿ���� ���� �ν����̸� FALSE ����
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
 checkYear ()�Լ�: �⵵�� ��,��� ���� �˻�
  ��������: ��,��� �˻��� �⵵
  ���ϰ�: �����̸� TRUE, ����̸�FALSE ����
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



