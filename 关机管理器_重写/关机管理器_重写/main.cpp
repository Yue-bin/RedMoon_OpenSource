#include"Cpowermanager.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	Cpowermanager p;

	//��ʼ�����
	//����Ϊ���� 
	while (p.returner==1)//returner��ֵΪ1����(����)Ϊ����״̬��Ϊ0��Ϊ�ر�״̬
	{
		system("cls");
		printf_s("�ػ������� ver4.0.1\n~~~~~~~~~~~~~~~~~~~~\n�����������֣�\n1.�ػ�\n2.����\n3.����\n4.��ֹǰһ����\n5.����\n6.�رչػ�������\n");
		p.iner = _getch();
		system("cls");
		switch (p.iner)
		{

			//�ػ�ģ��
		case 49: {
			p.returner=p._shutdown();
			break;
		}

			   //����ģ��
		case 50: {
			p.returner=p._restart();
			break;
		}

			   //����ģ��
		case 51: {
			p.returner=p._sleep();
			break;
		}

			   //��ֹǰһ����ģ��
		case 52: {
			p._stop_lastorder();
			break;
		}

			   //����ģ��
		case 53: {
			p._set();
			break;
		}

			   //�˳�
		case 54: {
			p.returner = 0;	//����״̬Ϊ�ر�
			break;
		}

			   //����������ģ��
		default: {
			p.input_error();
			break;
		}
		}
	}
	return (0);	//״̬Ϊ���رա�ʱ�˳�����
}