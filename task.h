#ifndef _TASK_H_
#define _TASK_H_
#include <iostream>

class task
{
private:
	char name[20];
	short status;
public:

	task() :status(0){
		for(int i = 0; i < 20; i++)
		{
			name[i] = ' ';
		}
	}

	task(char n[20], short s) :status(s)
	{
		for(int i = 0; i < 20; i++)
		{
			name[i] = n[i];
		}
	}

	task(const task& obj);

	void set_task();

	void show_task();

	short get_status();

	char* get_name();

	void upgrade_task();

	void reduce_task();

	void show_status();
	
};

#endif 

