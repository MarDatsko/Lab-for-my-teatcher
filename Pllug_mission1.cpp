#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	string choice_user;
	int user,comp;
	do
	{
		cout << "Enter [Rock], [Scissors], [Paper]" << endl;
		cout << "EXIT enter [x]" << endl;
		cin >> choice_user;
		comp = rand() % 3;
		if (choice_user == "x")
		{
			break;
		}
		else if (choice_user == "rock" || choice_user == "Rock")
		{
			user = 0;
		}
		else if (choice_user == "scissors" || choice_user == "Scissors")
		{
			user = 1;
		}
		else if (choice_user == "paper" || choice_user == "Paper")
		{
			user = 2;
		}
		else
		{
			cout << "Incorect word. Try Again"<<endl;
			continue;
		}
		do
		{
			if (comp == 0)
			{
				cout << "Rock";
			}
			else if (comp == 1)
			{
				cout << "Scissors";
			}
			else if (comp == 2)
			{
				cout << "Paper";
			}

			cout << endl;
			if (user == comp)
			{
				cout << "WIN FRIENDSHIP";
				break;
			}
			else if ((user == 0 && comp == 1) || (user == 1 && comp == 2) || (user == 2 && comp == 0))
			{
				cout << "YOU WIN";
				break;
			}
			else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1 ))
			{
				cout << "YOU LOSS";
				break;
			}
			
		} while (true);
		cout << endl << endl;
	} while (true);
	_getch();
	return 0;
}