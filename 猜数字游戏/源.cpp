#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
	{
	printf("******************************\n");
	printf("****	1.play	0.exit	*****\n");
	printf("******************************\n");
	}
// 
void game()
{
	int guess = 0;
	int ret = rand()%100+1;//����1--100����
	//1.����һ������� RAND_MAX 32767
	//2.������
	//printf("%d\n", ret);
	while (1)
	{
		printf("������֣���>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else if(guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
		printf("�¶��ˣ�\n");
		break;
        }
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ���=��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0��0��0��=��XXX����

	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}