#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//ִ�С�ϵͳ����-�ػ�
	again:
		printf("�����롯������������60���ػ�\n");
		scanf("%s", &input);//%s-�����ַ���
		if (strcmp(input, "������") == 0)//�ж��ַ����Ƿ����
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
	return 0;
}