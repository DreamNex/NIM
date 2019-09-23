#ifndef GAMEHANDLER_H
#define GAMEHANDLER_H

#include "Apples.h"

#pragma once
class GameHandler
{
private:
	int i_player;
	int i_turns;
	bool player1Win;
	bool player2Win;

	enum GameState
	{
		GAME_START,
		GAME_OVER,
		PLAYER1_TURN,
		PLAYER2_TURN,
		RESET_GAME
	};

public:

	int numofapp;
	char pile;
	Apples AppleManager;

	GameState GS_STATE;

	GameState GetCurrentState();
	int GetCurrentPlayer();

	void SetCurrentState(GameState STATE);
	void SetCurrentPlayer(int player);


	void GameStart();
	void Player1Turn();
	void Player2Turn();
	void GameOver();

	void SCase(GameState STATE);

	void ResetGame();

	GameHandler();
	~GameHandler();
};

#endif

