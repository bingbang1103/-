#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*int num = 0;
	printf("�����ѧ��ʼ���Ʊ");
	scanf("%d", &num);
	if (num == 1)
		printf("����500��ӭȢȢ�׸���");
	else
		printf("û����");
		*/
	int line = 0;
	printf("ѧϰC����");
	while (line <20000)
	{
		printf("�����ô���:%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("�����ҵ�һ���ù���");
	return 0;
}