#include "task.h"
#include <iostream>

using namespace std;


task::task(const task& obj)
{
	status = obj.status;
	for(int i = 0; i < 20; i++)
	{
		name[i] = obj.name[i];
	}
}

void task::set_task()
{
	cout << "Input name: ";
	cin.get(name, 20);
	cout << "Input status(0 - 'to do', 1 - 'in progress', 2 - 'varificate', 3 - 'done'): ";
	while(true)
	{
		cin >> status;
		if(status >= 0 && status <= 3)
		{
			break;
		}
		else
		{
			cout << "Retry, status must be in range 0..3" << endl;
		}
	}
}

void task::show_task()
{
	cout << "Name: ";
	for(int i = 0; i < 20; i++)
	{
		cout << name[i];
	}
	cout << endl;
	cout << "Status: ";
	show_status ();
}

short task::get_status()
{
	return this->status;
}

char* task::get_name()
{
	return this->name;
}

void task::upgrade_task()
{
	if(status < 3)
	{
		status++;
	}
}

void task::reduce_task()
{
	if(status > 0)
	{
		status--;
	}
}

void task::show_status()
{
	switch(status)
	{
		case 0: cout << "to do.." << endl;
			break;
		
		case 1: cout << "in progress;" << endl;
			break;
		
		case 2: cout << "varificate;" << endl;
			break;
		
		case 3: cout << "done!" << endl;
			break;
	}
}
