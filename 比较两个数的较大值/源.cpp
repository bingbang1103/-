#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1=0, num2=0,max=0;
	printf("�������һ����:%d\n������ڶ�����Ϊ��%d\n",num1,num2);
	scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	printf("�ϴ�����ǣ�%d", max);
	return 0;
}