#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter an integer value:\n";
	int value{ 0 };
	cin >> value;

	if (value % 2 == 0)
	{
		cout << "The value " << value << " is an even value.\n";
	}
	if (value % 2 == 1)
	{
		cout << "The value " << value << " is an odd value.\n";
	}

	keep_window_open();
	return 0;
}