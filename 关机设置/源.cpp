#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬���Լ����ػ���������룺��ȡ���ػ�������ȡ���ػ�");
	scanf("%c", &input);
	if (strcmp(input, "ȡ���ػ�") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}