#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age=80;
	/*printf("���������䣺",age);
	scanf("%d\n",&age);*/
	if (age < 18)
		printf("δ���꣡");
	else if (18 <= age && age < 18)
		printf("����");
	else if (28 <= age && age < 50)
		printf("׳��");
	else if (50 <= age && age < 100)
		printf("����");
	else if (age >= 100)
		printf("������");
	return 0;
}