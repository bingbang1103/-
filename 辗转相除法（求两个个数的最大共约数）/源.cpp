#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("num1=");
	scanf("%d", &num1);
	printf("num2=");
	scanf("%d", &num2);
	while (num1 % num2)
	{
		num3 = num1 % num2;
		num1 = num2;
		num2 = num3;
	}
	printf("num1��num2�����Լ��Ϊ��%d\n",num2);
	return 0;
}