#include "Cpowermanager.h"
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h> 
#include<atlbase.h>



//��ʼ��
Cpowermanager::Cpowermanager()
{
	system("title �ػ�������-ʹ������д�İ汾");
	system("color 1F");
	Cpowermanager::command[0]=' ';
	Cpowermanager::iner = 0;
	Cpowermanager::returner = 1;
}

//�ػ�ģ��
int Cpowermanager::_shutdown()
{
	system("cls");
	printf_s("1.��ʱ�ػ�\n2.ֱ�ӹػ�\n3.ֱ�ӹػ�(�����κ�ע���Ӧ�ó���)\n4.����\n");
	Cpowermanager::iner = _getch();  //��ȡ����ֵ
	system("cls");
	switch (Cpowermanager::iner) {

		//��ʱ�ػ�
		case 49: {
			printf_s("��ϣ����ĵ����ڶ������ػ���(������ֵ���ɣ����롰0�����Է������˵�)\n��ϣ��:");
			scanf_s("%d", &(Cpowermanager::iner));
			//����
			if (Cpowermanager::iner == 0) {
				break;
			}
			//���ö�ʱ�ػ�
			else if (Cpowermanager::iner == 0) {
				sprintf_s(Cpowermanager::command, "shutdown /s /t %d /hybrid", iner);
				system(Cpowermanager::command);
				break;
			}
		}

		//ֱ�ӹػ�
		case 50: {
			printf_s("���ڹػ�......");
			system("shutdown /s /t 0 /hybrid");
			return (0);
		}

		//ֱ�ӹػ�(�����κ�ע���Ӧ�ó���)
		case 51: {
			printf_s("���ڹػ�......");
			system("shutdown /sg");
			return (0);
		}

		//����
		case 52: {
			break;
		}

		//�������
		default: {
			printf_s("�������");
			_getch();
		}
	}

	//��ɲ���������
	return(1);
}

//����ģ��
int Cpowermanager::_restart()
{
	system("cls");
	printf_s("1.��ʱ����\n2.ֱ������\n3.����\n");
	Cpowermanager::iner=_getch();
	system("cls");
	switch (Cpowermanager::iner) {

		//��ʱ����
	case 49: {
		printf_s("��ϣ����ĵ����ڶ������������(������ֵ���ɣ����롰0�����Է������˵�)\n��ϣ��:");
		scanf_s("%d", &(Cpowermanager::iner));
		//����
		if (Cpowermanager::iner == 0) {
			break;
		}
		//���ö�ʱ����
		else if (Cpowermanager::iner == 0) {
			sprintf_s(Cpowermanager::command, "shutdown /r /t %d", iner);
			system(Cpowermanager::command);
			break;
		}
	}

		   //ֱ������
	case 50: {
		printf_s("��������......");
		system("shutdown /r /t 0");
		return (0);
	}

		   //����
	case 51: {
		break;
	}

		   //�������
	default: {
		printf_s("�������");
		_getch();
	}

	}

	//��ɲ���������
	return(1);
}

//����ģ��
int Cpowermanager::_sleep()
{
	system("cls");
	printf_s("1.ֱ������\n2.����\n");
	Cpowermanager::iner = _getch();
	system("cls");
	switch (Cpowermanager::iner) {
	
	//ֱ������
	case 49: {
		system("shutdown /h");
		return (0);
	}

	//����
	case 50: {
		break;
	}

	//�������
	default: {
		   printf_s("�������");
		   _getch();
	}

	}

	//��ɲ���������
	return (1);
}

//��ֹ��һ����ģ��
int Cpowermanager::_stop_lastorder()
{
	system("cls");
	printf_s("������ֹ��һ����......\n");
	system("shutdown /a");
	_getch();
	return (0);
}

//����ģ��
int Cpowermanager::_set()
{
	system("cls");
	printf_s("1.����������\n2.�鿴��־\n3.����\n");
	Cpowermanager::iner = _getch();
	system("cls");
	switch (Cpowermanager::iner) {

		//����������
	case 49: {
		printf_s("�����ߣ��±�\n  ���������ң�RMS~���¹�����\n  ������˾��JRG~������Ϸ��˾\n");
		printf_s("ͼ������ߣ���ī");
		puts("\n��������......\n");
		_getch();
		break;
	}

		   //�鿴��־
	case 50: {
		//����־
		printf_s("[������־]\n");
		printf_s("ver1.0.0  ����汾\n*����Ļ�����ܡ�\n\n");
		Sleep(200);
		printf_s("ver1.0.1  �ڲ�汾\n*�����˹��ܡ���ʱ��\n*���ı������Ż�ѡ��Ϊ��highest��\n\n");
		Sleep(200);
		printf_s("ver1.2.4  ������ڲ�汾\n*���Ĵ�����ɫΪ��1F��\n*�кܶ���δ�޸ĵ�bug\n\n");
		Sleep(200);
		printf_s("ver1.3.1  ������ڲ�汾\n*ʹ1.2.4�汾�ܹ�ͨ����������������~(������)~\n*�޸���һЩ�﷨�ϵĴ���\n*���ӡ����á��͡��رչ�������ѡ��\n\n");
		Sleep(200);
		printf_s("ver2.0.1  ��ʽ��\n*�Դ��������ά������Ȼû���٣�\n*����汾��Ϊ�Ƽ��ڶ��޶���\n\n");
		Sleep(200);
		printf_s("ver3.0.1  ��ʽ��\n*�Դ��������ά������Ȼû���٣�\n*������������(����ʱ���ð��س���)\n*����汾��Ϊ�Լ�ʹ�ö��޶���\n\n");
		Sleep(200);
		printf_s("ver3.1.0  ��ʽ��\n*�Դ��������ά������Ȼû���٣�\n*������ͼ��\n*ʹ��vs����\n*����汾��Ϊ�Լ�ʹ�ö��޶���\n\n");
		Sleep(200);
		
		//����־
		printf_s("\n\n\n\n~�����Ǿ���־~\n\n");
		Sleep(200);
		printf_s("[������־_��]");
		Sleep(200);
		printf_s("<version~4.0.1>\n\n*1.ʹ������д\n*2.��Ϊ����д��������ǰ��������Щbug����������\n*3.ɾȥ����ǰһЩ�鷳����ʾ\n*4.Ҳ����ʹ�����Ե�ʰɣ������ٶ���������\n");
		printf_s("\n\n��������......");
		_getch();
		break;
	}

		   //����
	case 51: {
		break;
	}

		   //�������
	default: {
		printf_s("�������");
		break;
	}

	return (0);
	}
}

//����������ģ��
int Cpowermanager::input_error()
{
	printf("�������\n��������\n");
	_getch();
	return (0);
}