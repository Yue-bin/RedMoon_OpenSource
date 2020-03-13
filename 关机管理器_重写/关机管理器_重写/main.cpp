#include"Cpowermanager.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	Cpowermanager p;

	//初始化完毕
	//以下为主体 
	while (p.returner==1)//returner的值为1代表(程序)为运行状态，为0则为关闭状态
	{
		system("cls");
		printf_s("关机管理器 ver4.0.1\n~~~~~~~~~~~~~~~~~~~~\n（请输入数字）\n1.关机\n2.重启\n3.休眠\n4.终止前一操作\n5.设置\n6.关闭关机管理器\n");
		p.iner = _getch();
		system("cls");
		switch (p.iner)
		{

			//关机模块
		case 49: {
			p.returner=p._shutdown();
			break;
		}

			   //重启模块
		case 50: {
			p.returner=p._restart();
			break;
		}

			   //休眠模块
		case 51: {
			p.returner=p._sleep();
			break;
		}

			   //终止前一操作模块
		case 52: {
			p._stop_lastorder();
			break;
		}

			   //设置模块
		case 53: {
			p._set();
			break;
		}

			   //退出
		case 54: {
			p.returner = 0;	//设置状态为关闭
			break;
		}

			   //输入错误回显模块
		default: {
			p.input_error();
			break;
		}
		}
	}
	return (0);	//状态为“关闭”时退出程序
}