#include "Apples.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Apples AppleManager;
int i_input1 = 0;
int i_input2 = 0;
int i_turns = 1;

char c_pile1;
char c_pile2;

void main()
{
	AppleManager.SetNumOfApplesA(10);
	AppleManager.SetNumOfApplesB(10);
	AppleManager.SetNumOfApplesC(10);

	while (AppleManager.SetNGetTotal() > 0)
	{
		cout << "=========\n";
		cout << "   TURN: " << i_turns;
		cout << "\n=========\n";
		cout << "Player 1 (Enter pile to take from A/B/C): \n";

		cin >> c_pile1;

		if (c_pile1 == 'A' || c_pile1 == 'a')
		{
			if (AppleManager.GetNumOfApplesA() <= 0)
			{
				cout << "Pile is empty, please choose again: \n";
			}

			else
			{
				cout << "Player 1 (Enter number of apples): \n";

				cin >> i_input1;

				AppleManager.MinusApplesA(i_input1);

				if (AppleManager.SetNGetTotal() <= 0)
				{
					cout << "Player 1 wins!";
					break;
				}


			}

		}

		else if (c_pile1 == 'B' || c_pile1 == 'b')
		{
			if (AppleManager.GetNumOfApplesB() <= 0)
			{
				cout << "Pile is empty, please choose again: \n";
			}

			else
			{
				cout << "Player 1 (Enter number of apples): \n";

				cin >> i_input1;

				AppleManager.MinusApplesB(i_input1);

				if (AppleManager.SetNGetTotal() <= 0)
				{
					cout << "Player 1 wins!";
					break;
				}

			}
		}

		else if (c_pile1 == 'C' || c_pile1 == 'c')
		{
			if (AppleManager.GetNumOfApplesC() <= 0)
			{
				cout << "Pile is empty, please choose again: \n";
			}

			else
			{
				cout << "Player 1 (Enter number of apples): \n";

				cin >> i_input1;

				AppleManager.MinusApplesC(i_input1);

				if (AppleManager.SetNGetTotal() <= 0)
				{
					cout << "Player 1 wins!";
					break;
				}
			}
		}
		else
		{
			system("cls");
			cout << "Wrong input. Pls Try Again\n";
			continue;
		}

		cout << "Player 2 (Enter pile to take from A/B/C): \n";

		cin >> c_pile2;

		if (c_pile2 == 'A' || c_pile2 == 'a')
		{
			if (AppleManager.GetNumOfApplesA() <= 0)
			{
				cout << "Pile is empty, please choose again: \n";
			}

			else
			{
				cout << "Player 2 (Enter number of apples): \n";

				cin >> i_input2;

				AppleManager.MinusApplesA(i_input2);
				i_turns++;

				if (AppleManager.SetNGetTotal() <= 0)
				{
					cout << "Player 2 wins!";
					break;
				}

				else
					continue;

			}
		}

		else if (c_pile1 == 'B' || c_pile1 == 'b')
		{
			if (AppleManager.GetNumOfApplesB() <= 0)
			{
				cout << "Pile is empty, please choose again: \n";
			}

			else
			{
				cout << "Player 2 (Enter number of apples): \n";

				cin >> i_input2;

				AppleManager.MinusApplesB(i_input2);
				i_turns++;

				if (AppleManager.SetNGetTotal() <= 0)
				{
					cout << "Player 2 wins!";
					break;
				}

				else
					continue;


			}
		}

		else if (c_pile1 == 'C' || c_pile1 == 'c')
		{
			if (AppleManager.GetNumOfApplesC() <= 0)
			{
				cout << "Pile is empty, please choose again: \n";
			}

			else
			{
				cout << "Player 2 (Enter number of apples): \n";

				cin >> i_input2;

				AppleManager.MinusApplesC(i_input2);
				i_turns++;

				if (AppleManager.SetNGetTotal() <= 0)
				{
					cout << "Player 2 wins!";
					break;
				}

				else
					continue;
			}
		}

		else
			continue;

	}
}