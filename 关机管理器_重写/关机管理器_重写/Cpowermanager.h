#pragma once

class Cpowermanager
{
public:
	Cpowermanager();
	int iner,returner;
	char command[50];
	int _shutdown();
	int _restart();
	int _sleep();
	int _stop_lastorder();
	int _set();
	int input_error();
};

//ע��ȫд��ʵ���ļ���