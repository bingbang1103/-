#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("��Ҫ�ú�ѧϰ��(1/0):>");
	scanf("%d", &input);
	if (input == 1)
		printf("Ҫ�ú�ѧϰ��");
	else
		printf("�ؼ����");
	return 0;
}