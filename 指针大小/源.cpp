#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n",sizeof(double*));
	*/
	int a = 0x11223344;
	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С�� 
	/*int* p;*p�ܹ�����4���ֽڡ�
	* char* p;�ܹ�����һ���ֽڡ�
	* double* p;�ܹ�����8���ֽڡ� 
	*/
	int* pa = &a;
	*pa = 0;
	printf("%p", pa);
	return 0;
}
/*
* Ұָ��:Ұָ�����ָ��ָ���λ���ǲ���֪�ġ�(����ġ� ����ȷ�ġ�û����ȷ���Ƶġ�)
* ԭ��:
1ָ��δ��ʼ����// NULL-������ʼ��ָ��,��ָ�븳ֵ(int *p=NULL)��
2.ָ��Խ����ʡ�
* 3.�ֲ����������١�
*/