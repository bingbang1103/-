#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include "game.h"
#include "game.c"
void meun()
{
	printf("*****************************\n");
	printf("**** 1.play **** 0.exit *****\n");
	printf("*****************************\n");
}
void game()//��Ϸ�㷨ʵ��
{
	char ret = 0;
	//����������λ����Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		system("cls");
		printf("������game\n");
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret=IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		system("cls");
		printf("������game\n");
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret=IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��!\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ��>");
		scanf("%d",&input );
		switch (input)
		{
		    case 1:
				printf("������game\n");
				game();
				break;
			case 0:
			printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����,������ѡ��!\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}