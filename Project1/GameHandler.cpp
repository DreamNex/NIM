#include "GameHandler.h"
#include <iostream>

using namespace std;

GameHandler::GameHandler()
{
	GS_STATE = GAME_START;
	i_player = 1;
	i_turns = 1;
	numofapp = 0;
	pile = ' ';

	player1Win = false;
	player2Win = false;

}

GameHandler::GameState GameHandler::GetCurrentState()
{
	return GS_STATE;
}

int GameHandler::GetCurrentPlayer()
{
	return i_player;
}

void GameHandler::SetCurrentState(GameState STATE)
{
	GS_STATE = STATE;
}

void GameHandler::SetCurrentPlayer(int player)
{
	i_player = player;
}

void GameHandler::GameStart()
{
	system("cls");
	cout << "========================" << endl;
	cout << "Welcome to Apple Game" << endl;
	cout << "========================" << endl;
	cout << "Press ENTER to Start Game" << endl;

	AppleManager.SetNumOfApplesA(10);
	AppleManager.SetNumOfApplesB(10);
	AppleManager.SetNumOfApplesC(10);
}

void GameHandler::Player1Turn()
{
	system("cls");

	SetCurrentPlayer(1);

	cout << "=========\n";
	cout << "   TURN: " << i_turns;

	cout << "A(" << AppleManager.GetNumOfApplesA()
		<< ") B(" << AppleManager.GetNumOfApplesB()
		<< ") C(" << AppleManager.GetNumOfApplesC() << ")" << endl;
	
	cout << "\n=========\n";
	cout << "Player " << GetCurrentPlayer() << " (Enter pile to take from A/B/C): \n";

	cin >> pile;

	if (pile == 'A' || pile == 'a')
	{
		if (AppleManager.GetNumOfApplesA() > 0)
		{
			cout << "Enter numer of apples: " << endl;

			cin >> numofapp;

			AppleManager.MinusApplesA(numofapp);

			if (AppleManager.SetNGetTotal() <= 0)
			{
				player1Win = true;
				GS_STATE = GAME_OVER;
			}

			GS_STATE = PLAYER2_TURN;

			i_turns++;

		}

		else
		{
			cout << "Pile is empty!!" << endl;
		}
	}

	if (pile == 'B' || pile == 'b')
	{
		if (AppleManager.GetNumOfApplesB() > 0)
		{
			cout << "Enter numer of apples: " << endl;

			cin >> numofapp;

			AppleManager.MinusApplesC(numofapp);

			if (AppleManager.SetNGetTotal() <= 0)
			{
				player1Win = true;
				GS_STATE = GAME_OVER;
			}

			GS_STATE = PLAYER2_TURN;

			i_turns++;

		}

		else
		{
			cout << "Pile is empty!!" << endl;
		}
	}

	else if (pile == 'C' || pile == 'c')
	{
		if (AppleManager.GetNumOfApplesC() > 0)
		{
			cout << "Enter numer of apples: " << endl;

			cin >> numofapp;

			AppleManager.MinusApplesC(numofapp);

			if (AppleManager.SetNGetTotal() <= 0)
			{
				player1Win = true;
				GS_STATE = GAME_OVER;
			}

			GS_STATE = PLAYER2_TURN;

			i_turns++;

		}

		else
		{
			cout << "Pile is empty!!" << endl;
		}
	}

	else
	{

	}
}

void GameHandler::Player2Turn()
{
	system("cls");

	SetCurrentPlayer(2);

	cout << "=========\n";
	cout << "   TURN: " << i_turns;

	cout << "A(" << AppleManager.GetNumOfApplesA()
		<< ") B(" << AppleManager.GetNumOfApplesB()
		<< ") C(" << AppleManager.GetNumOfApplesC() << ")" << endl;

	cout << "\n=========\n";
	cout << "Player " << GetCurrentPlayer() << " (Enter pile to take from A/B/C): \n";

	cin >> pile;

	if (pile == 'A' || pile == 'a')
	{
		if (AppleManager.GetNumOfApplesA() > 0)
		{
			cout << "Enter numer of apples: " << endl;

			cin >> numofapp;

			AppleManager.MinusApplesA(numofapp);

			if (AppleManager.SetNGetTotal() <= 0)
			{
				player2Win = true;
				GS_STATE = GAME_OVER;
			}

			GS_STATE = PLAYER1_TURN;

			i_turns++;

		}

		else
		{
			cout << "Pile is empty!!" << endl;
		}
	}

	if (pile == 'B' || pile == 'b')
	{
		if (AppleManager.GetNumOfApplesB() > 0)
		{
			cout << "Enter numer of apples: " << endl;

			cin >> numofapp;

			AppleManager.MinusApplesC(numofapp);

			if (AppleManager.SetNGetTotal() <= 0)
			{
				player2Win = true;
				GS_STATE = GAME_OVER;
			}

			GS_STATE = PLAYER1_TURN;

			i_turns++;

		}

		else
		{
			cout << "Pile is empty!!" << endl;
		}
	}

	else if (pile == 'C' || pile == 'c')
	{
		if (AppleManager.GetNumOfApplesC() > 0)
		{
			cout << "Enter numer of apples: " << endl;

			cin >> numofapp;

			AppleManager.MinusApplesC(numofapp);

			if (AppleManager.SetNGetTotal() <= 0)
			{
				player2Win = true;
				GS_STATE = GAME_OVER;
			}

			GS_STATE = PLAYER1_TURN;

			i_turns++;

		}

		else
		{
			cout << "Pile is empty!!" << endl;
		}
	}

	else
	{

	}
}

void GameHandler::GameOver()
{
	if (player1Win && !player2Win)
	{
		system("cls");
		SetCurrentPlayer(1);
		cout << "Player" << GetCurrentPlayer() << " wins!" << endl;
	}

	else if (player2Win && !player1Win)
	{
		system("cls");
		SetCurrentPlayer(2);
		cout << "Player" << GetCurrentPlayer() << " wins!" << endl;
	}
}

void GameHandler::SCase(GameState STATE)
{
	switch (STATE) {

	case GAME_START:
		GameStart();
		break;

	case PLAYER1_TURN:
		Player1Turn();
		break;

	case PLAYER2_TURN:
		Player2Turn();
		break;

	case GAME_OVER:
		GameOver();
		break;

	case RESET_GAME:
		ResetGame();
		break;
	}
}

void GameHandler::ResetGame()
{
	GS_STATE = GAME_START;
	i_player = 1;
	i_turns = 1;
}


GameHandler::~GameHandler()
{

}

