#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

void main()
{
	while (1)
	{
		int c;
		printf("1.�û���¼\n");
		printf("2.�û�ע��\n");
		printf("0.�˳�\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			LOGIN();
			printf("����û���Ϊ��%s, �������Ϊ��%s\n", username_s, password_s);
			return;
		case 2:
			REGI();
			printf("����û���Ϊ��%s, �������Ϊ��%s\n", username_s, password_s);
			return;
		case 0:
			printf("��л��ʹ�ñ�����\n");
			return;
		default:
			printf("��������Ч����\n");
			break;
		}
	}
	system("pause");
	return;
}

void INPUT_USERNAME()
{
	
	printf("�������û�����\n");
	scanf("%s", username_s);
	
	return;
}

void INPUT_PASSWORD()
{
	
	printf("����������:\n");
	scanf("%s", password_s);
	
	return;
}

void REGI()
{
	while (1)
	{
		int c;
		printf("1.ע�����û�\n");
		printf("0.����������\n");
		scanf("%d", &c);
		switch (c)
		{
		case 0:
			return;
		case 1:
			REGI2();
			return;
		default:
			break;
		}
	}
}

void REGI2()
{
	while (1)
	{
		int c1;
		printf("1.�����û���\n");
		printf("2.��������\n");
		printf("0.����������\n");
		scanf("%d", &c1);
		switch (c1)
		{
		case 1:
			INPUT_USERNAME();
			if (username_s[0] == '0' && username_s[1] == '\0')
			{
				break;
			}
			break;
		case 2:
			INPUT_PASSWORD();
			if (password_s[0] == '0' && password_s[1] == '\0')
			{
				break;
			}
			return;
		case 0:
			if (password_s[0] == '\0')
			{
				printf("�������������룡\n");
				break;
			}
			return;
		}
	}
}

void LOGIN2()
{
	while (1)
	{
		INPUT_USERNAME();
		switch (strcmp(username, username_s))
		{
		case 0:
			INPUT_PASSWORD();
			switch (strcmp(password, password_s))
			{
			case 0:
				return;
			default:
				if (password_s[0] == '0' && password_s[1] == '\0')
				{
					break;
				}
				printf("�������\n");
				break;
			}
			break;
		default:
			if (username_s[0] == '0' && username_s[1] == '\0')
			{
				break;
			}
			printf("�û�������\n");
			break;
		}
	}
}

void LOGIN()
{
	while (1)
	{
		int c;
		printf("1.�����û���\n");
		printf("2.��������\n");
		printf("3.ע���˺�\n");
		printf("0.�������˵�\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			INPUT_USERNAME();
			switch (strcmp(username, username_s))
			{
			case 0:
				break;
			default:
				if (username_s[0] == '0' && username_s[1] == '\0')
				{
					break;
				}
				printf("�û�������\n");
				break;
			}
			break;
		case 2:
			INPUT_PASSWORD();
			switch (strcmp(password, password_s))
			{
			case 0:
				return;
			default:
				if (password_s[0] == '0' && password_s[1] == '\0')
				{
					break;
				}
				printf("�������\n");
				break;
			}
			break;
		case 3:
			REGI();
			return;
		case 0:
			if (strcmp(password, password_s) != 0)
			{
				printf("����û���������룡\n");
				break;
			}
			return;

		}
	}
}