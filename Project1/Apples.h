#include<stdio.h>
#include <stdlib.h>
#ifndef APPLES_H
#define APPLES_H

#pragma once
class Apples
{
private:

	int NumOfApplesA = 0;
	int NumOfApplesB = 0;
	int NumOfApplesC = 0;

	int TotalNumOfAppes = 0;

public:
	
	int GetNumOfApplesA();
	int GetNumOfApplesB();
	int GetNumOfApplesC();

	void SetNumOfApplesA(int apples);
	void SetNumOfApplesB(int apples);
	void SetNumOfApplesC(int apples);

	void MinusApplesA(int apples);
	void MinusApplesB(int apples);
	void MinusApplesC(int apples);

	void GetRandNum();

	int SetNGetTotal();

	Apples();
	~Apples();
};

#endif 