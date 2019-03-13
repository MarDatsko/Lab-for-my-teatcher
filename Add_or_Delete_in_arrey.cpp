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

	return _yura1;
	
}

void DeleteArrey(int *_yura, int size_arrey, int x)
{
	int *yura1 = new int[size_arrey - x];
	for (int i = 0; i < (size_arrey - x); i++)
	{
		yura1[i] = _yura[i];
	}
	PrintArrey(yura1, (size_arrey - x));
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
		
		int *yura2 = new int[SizeArrey + x];
		yura2 = AddArrey(yura, SizeArrey, x);
		PrintArrey(yura2, (SizeArrey + x));
		delete[] yura;
	}
	else if (choice_user == 'd' || choice_user == 'D')
	{
		cout << "Enter number what you wont delete ";
		cin >> x;
		DeleteArrey(yura, SizeArrey, x);
	}
	else
	{
		cout << " Error/ Try again/ =) ";
	}
	//PrintArrey(yura, (SizeArrey+x));
	system("pause");
	return 0;
}