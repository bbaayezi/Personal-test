#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

void main()
{
	while (1)
	{
		int c;
		printf("1.用户登录\n");
		printf("2.用户注册\n");
		printf("0.退出\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			LOGIN();
			printf("你的用户名为：%s, 你的密码为：%s\n", username_s, password_s);
			return;
		case 2:
			REGI();
			printf("你的用户名为：%s, 你的密码为：%s\n", username_s, password_s);
			return;
		case 0:
			printf("感谢您使用本程序！\n");
			return;
		default:
			printf("请输入有效数字\n");
			break;
		}
	}
	system("pause");
	return;
}

void INPUT_USERNAME()
{
	
	printf("请输入用户名：\n");
	scanf("%s", username_s);
	
	return;
}

void INPUT_PASSWORD()
{
	
	printf("请输入密码:\n");
	scanf("%s", password_s);
	
	return;
}

void REGI()
{
	while (1)
	{
		int c;
		printf("1.注册新用户\n");
		printf("0.返回主界面\n");
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
		printf("1.输入用户名\n");
		printf("2.输入密码\n");
		printf("0.返回主界面\n");
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
				printf("请设置您的密码！\n");
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
				printf("密码错误！\n");
				break;
			}
			break;
		default:
			if (username_s[0] == '0' && username_s[1] == '\0')
			{
				break;
			}
			printf("用户名错误！\n");
			break;
		}
	}
}

void LOGIN()
{
	while (1)
	{
		int c;
		printf("1.输入用户名\n");
		printf("2.输入密码\n");
		printf("3.注册账号\n");
		printf("0.返回主菜单\n");
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
				printf("用户名错误！\n");
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
				printf("密码错误！\n");
				break;
			}
			break;
		case 3:
			REGI();
			return;
		case 0:
			if (strcmp(password, password_s) != 0)
			{
				printf("您还没有输入密码！\n");
				break;
			}
			return;

		}
	}
}