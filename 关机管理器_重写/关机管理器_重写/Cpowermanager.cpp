#include "Cpowermanager.h"
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h> 
#include<atlbase.h>



//初始化
Cpowermanager::Cpowermanager()
{
	system("title 关机管理器-使用类重写的版本");
	system("color 1F");
	Cpowermanager::command[0]=' ';
	Cpowermanager::iner = 0;
	Cpowermanager::returner = 1;
}

//关机模块
int Cpowermanager::_shutdown()
{
	system("cls");
	printf_s("1.定时关机\n2.直接关机\n3.直接关机(重启任何注册的应用程序)\n4.返回\n");
	Cpowermanager::iner = _getch();  //获取输入值
	system("cls");
	switch (Cpowermanager::iner) {

		//定时关机
		case 49: {
			printf_s("你希望你的电脑在多少秒后关机？(输入数值即可，输入“0”可以返回主菜单)\n我希望:");
			scanf_s("%d", &(Cpowermanager::iner));
			//返回
			if (Cpowermanager::iner == 0) {
				break;
			}
			//设置定时关机
			else if (Cpowermanager::iner == 0) {
				sprintf_s(Cpowermanager::command, "shutdown /s /t %d /hybrid", iner);
				system(Cpowermanager::command);
				break;
			}
		}

		//直接关机
		case 50: {
			printf_s("正在关机......");
			system("shutdown /s /t 0 /hybrid");
			return (0);
		}

		//直接关机(重启任何注册的应用程序)
		case 51: {
			printf_s("正在关机......");
			system("shutdown /sg");
			return (0);
		}

		//返回
		case 52: {
			break;
		}

		//输入错误
		default: {
			printf_s("输入错误");
			_getch();
		}
	}

	//完成操作，返回
	return(1);
}

//重启模块
int Cpowermanager::_restart()
{
	system("cls");
	printf_s("1.定时重启\n2.直接重启\n3.返回\n");
	Cpowermanager::iner=_getch();
	system("cls");
	switch (Cpowermanager::iner) {

		//定时重启
	case 49: {
		printf_s("你希望你的电脑在多少秒后重启？(输入数值即可，输入“0”可以返回主菜单)\n我希望:");
		scanf_s("%d", &(Cpowermanager::iner));
		//返回
		if (Cpowermanager::iner == 0) {
			break;
		}
		//设置定时重启
		else if (Cpowermanager::iner == 0) {
			sprintf_s(Cpowermanager::command, "shutdown /r /t %d", iner);
			system(Cpowermanager::command);
			break;
		}
	}

		   //直接重启
	case 50: {
		printf_s("正在重启......");
		system("shutdown /r /t 0");
		return (0);
	}

		   //返回
	case 51: {
		break;
	}

		   //输入错误
	default: {
		printf_s("输入错误");
		_getch();
	}

	}

	//完成操作，返回
	return(1);
}

//休眠模块
int Cpowermanager::_sleep()
{
	system("cls");
	printf_s("1.直接休眠\n2.返回\n");
	Cpowermanager::iner = _getch();
	system("cls");
	switch (Cpowermanager::iner) {
	
	//直接休眠
	case 49: {
		system("shutdown /h");
		return (0);
	}

	//返回
	case 50: {
		break;
	}

	//输入错误
	default: {
		   printf_s("输入错误");
		   _getch();
	}

	}

	//完成操作，返回
	return (1);
}

//终止上一命令模块
int Cpowermanager::_stop_lastorder()
{
	system("cls");
	printf_s("正在终止上一命令......\n");
	system("shutdown /a");
	_getch();
	return (0);
}

//设置模块
int Cpowermanager::_set()
{
	system("cls");
	printf_s("1.关于制作者\n2.查看日志\n3.返回\n");
	Cpowermanager::iner = _getch();
	system("cls");
	switch (Cpowermanager::iner) {

		//关于制作者
	case 49: {
		printf_s("制作者：月饼\n  隶属工作室：RMS~红月工作室\n  隶属公司：JRG~九日游戏公司\n");
		printf_s("图标设计者：舒墨");
		puts("\n按键返回......\n");
		_getch();
		break;
	}

		   //查看日志
	case 50: {
		//旧日志
		printf_s("[更新日志]\n");
		printf_s("ver1.0.0  最初版本\n*程序的基本框架。\n\n");
		Sleep(200);
		printf_s("ver1.0.1  内测版本\n*增加了功能“定时”\n*更改编译器优化选项为“highest”\n\n");
		Sleep(200);
		printf_s("ver1.2.4  神奇的内测版本\n*更改窗口颜色为“1F”\n*有很多尚未修改的bug\n\n");
		Sleep(200);
		printf_s("ver1.3.1  传奇的内测版本\n*使1.2.4版本能够通过编译器而不报错~(￣▽￣)~\n*修改了一些语法上的错误\n*增加“设置”和“关闭管理器”选项\n\n");
		Sleep(200);
		printf_s("ver2.0.1  正式版\n*对代码进行了维护（虽然没多少）\n*这个版本是为科技节而修订的\n\n");
		Sleep(200);
		printf_s("ver3.0.1  正式版\n*对代码进行了维护（虽然没多少）\n*改善了易用性(输入时不用按回车了)\n*这个版本是为自己使用而修订的\n\n");
		Sleep(200);
		printf_s("ver3.1.0  正式版\n*对代码进行了维护（虽然没多少）\n*增加了图标\n*使用vs编译\n*这个版本是为自己使用而修订的\n\n");
		Sleep(200);
		
		//新日志
		printf_s("\n\n\n\n~以上是旧日志~\n\n");
		Sleep(200);
		printf_s("[更新日志_新]");
		Sleep(200);
		printf_s("<version~4.0.1>\n\n*1.使用类重写\n*2.因为是重写，所以以前代码中那些bug都不复存在\n*3.删去了以前一些麻烦的提示\n*4.也许是使用类的缘故吧，运行速度明显提升\n");
		printf_s("\n\n按键继续......");
		_getch();
		break;
	}

		   //返回
	case 51: {
		break;
	}

		   //输入错误
	default: {
		printf_s("输入错误");
		break;
	}

	return (0);
	}
}

//输入错误回显模块
int Cpowermanager::input_error()
{
	printf("输入错误\n按键继续\n");
	_getch();
	return (0);
}