#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char  password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)//==���ܱȽ������ַ����Ƿ���ȣ�Ӧ���ÿ⺯��-strcmp
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������");
		}
	}
	if (i >= 3)
	{
		printf("�����˳���\n");
	}
		return 0;
}