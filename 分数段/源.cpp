#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char score;
	printf("����������Σ�");
	scanf("%c", &score);
	switch (score)
	{
	case 'A':
		printf("���㣨80~100��");
		break;
	case 'B':
		printf("����60~80��");
		break;
	case 'C':
		printf("������0~60��");
		break;
	default:
		printf("�������");
	}
	return 0;
}