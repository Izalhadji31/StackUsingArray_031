#include <iostream>
#include <string>
using namespace std;

class program
{
private:
	string stack_array[5];
	int top;
public:
	program()
	{
		top = -1;
	}

	string push(string element)
	{
		if (top == 4)
		{
			cout << "stack full" << endl;
			return;
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << "ditambahakan(pushed)." << endl;
		return element;
	}

	void pop()
	{
		if (empty())
		{
			cout << "\nstack is empty. cannot pop." << endl;
			return;
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl;
		top--;
	}

	bool empty()
	{
		return (top == -1);
	}

};