#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score = 0;
	printf("������ɼ���");
	scanf("%d", &score);
	if (score <= 100)
	{
		printf("�ɼ�ΪA(90~100)");
	}
	else if (score <= 90)
	{
		printf("�ɼ�ΪB(80~90)");
	}
	else if (score <= 80)
	{
		printf("�ɼ�ΪC(70~80)");
	}
	else if (score <= 70)
	{
		printf("�ɼ�ΪD(60~70)");
	}
	else if (score <= 60)
	{
		printf("�ɼ�ΪE(0~60)");
	}
	return 0;
}