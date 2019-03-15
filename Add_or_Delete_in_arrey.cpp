#include <iostream>
using namespace std;

void PrintArrey(int *_yura, int size_arrey)
{
	for (int i = 0; i < size_arrey; i++)
	{
		cout << _yura[i] << " ";
	}
}

int* AddArrey(int *_yura, int size_arrey,int x)
{
	int *_yura1 = new int[size_arrey + x];
	for (int i = 0; i < size_arrey; i++)
	{
		_yura1[i] = _yura[i];
	}
	for (int i = size_arrey; i < (size_arrey + x); i++)
	{
		_yura1[i] = rand()% 234;
	}
	delete[] _yura;
	size_arrey = size_arrey + x;
	_yura = new int[size_arrey];
	for (int i = 0; i < size_arrey; i++)
	{
		_yura[i] = _yura1[i];
	}
	delete[] _yura1;
	return _yura;
	
}

int* DeleteArrey(int *_yura, int size_arrey, int x)
{

	int *_yura1 = new int[size_arrey-1];

	for (int i = 0; i < (x-1); i++)
	{
		_yura1[i] = _yura[i];
	}
	for (int i = x; i < size_arrey; i++)
	{
		_yura1[i] = _yura[i];
	}
	delete[] _yura;
	/*_yura = new int[size_arrey - 1];
	for (int i = 0; i < (size_arrey-1); i++)
	{
		_yura[i] = _yura1[i];
	}
	delete[] _yura1;*/
	return _yura1;
}

void RandomArrey(int *_yura, int size_arrey)
{
	for (int i = 0; i < size_arrey; i++)
	{
		_yura[i] = rand() % 123;
	}
}

int main()
{	
	int SizeArrey,x;
	char choice_user;
	int *ptr;
	cout << " Enter the arrey size ";
	cin >> SizeArrey;
	int *yura = new int[SizeArrey];
	RandomArrey(yura, SizeArrey);
	PrintArrey(yura, SizeArrey);
	cout << endl << "Add number [a] Delete number [d]";
	cin >> choice_user;
	if (choice_user == 'a' || choice_user == 'A')
	{
		cout << "Enter number what you wont add ";
		cin >> x;
		ptr = AddArrey(yura, SizeArrey, x);
		for (int i = 0; i < SizeArrey + x; i++)
		{
			cout << ptr[i]<<" ";
		}

	}
	else if (choice_user == 'd' || choice_user == 'D')
	{
		cout << "Enter number what you wont delete ";
		cin >> x;
		ptr = DeleteArrey(yura, SizeArrey, x);
		for (int i = 0; i < (SizeArrey); i++)
		{
			cout << ptr[i] << " ";
		}
	}
	else
	{
		cout << " Error/ Try again/ =) ";
	}
	system("pause");
	return 0;
}