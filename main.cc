#include <iostream>
#include <task.h>

using namespace std;

int main()
{
	task t;
	t.set_task ();
	t.show_status ();
	t.reduce_task ();
	t.upgrade_task ();
	t.upgrade_task ();
	t.show_task ();

	return 0;
}
