#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int level = 1, user = 0, comp = 0, i = 0, n;
	char choice;
	do
	{
		cout << "[Level "<< level <<"] Woul'd like to play? [p] - play, [l]- select level, [q] - quit" << endl;
		cin >> choice;
		if (choice == 'p')
		{
			comp = 1 + rand() % level;
			n = level / 2;
			i = 0;
			do
			{
				cout << "Guess the number " << endl;
				cin >> user;
				if (user == comp)
				{
					cout << "You Win"<< endl << endl;
					break;
				}
				else if (comp > user)
				{
					i++;
					if (i == (level - n))
					{
						cout << "You loss. Attempts ended" << endl << endl;
						break;
					}
					cout << "Great"<< endl;
					cout << "Try again" << endl << endl;
				}
				else if (comp < user)
				{
					i++;
					if (i == (level - n))
					{
						cout << "You loss. Attempts ended" << endl << endl;
						break;
					}
					cout << "Less"<< endl;
					cout << "Try again" << endl << endl;
				}
			} while (i < (level-n));
		}
		else if (choice == 'l')
		{
			cout << "Select level  ";
			cin >> level;
			cout << "Your level - " << level << endl;
		}
		else if (choice == 'q')
		{
			break;
		}
		else
		{
			cout << "Incorect word.Try Again"<< endl;
		}
	} while (true);
	_getch();
	return 0;
}