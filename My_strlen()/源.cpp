#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* str)//char* strָ�룬���ݵ�ַ��Ԫ��
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);// str + 1����һ��Ԫ�صĵ�ַ
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "dengzhibin";
	int len = my_strlen(arr);//���ַ������ȣ�arr�����飬���鴫�δ��Ĳ��������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("%d\n", len);
	return 0;
}
