#include<stdio.h>
int main()
{
	int counter = 0,i=0;
	printf("�������ַ�:");
	char ch = getchar();
	while ((ch=getchar())!= '\n')
	{
		if (ch==' ')
		{
			i= 0;
			//break;
			//continue;
		}
		else if (i == 0)
		{
			i = 1;
			counter++;
		}
	}
	printf("���ʸ���Ϊ��%d", counter);
	return 0;
}
