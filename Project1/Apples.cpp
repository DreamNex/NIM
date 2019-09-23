#include "Apples.h"
#include <time.h>


Apples::Apples()
{
	srand(time(NULL));
}

int Apples::GetNumOfApplesA()
{
	return NumOfApplesA;
}

int Apples::GetNumOfApplesB()
{
	return NumOfApplesB;
}

int Apples::GetNumOfApplesC()
{
	return NumOfApplesC;
}

void Apples::SetNumOfApplesA(int apples)
{
	NumOfApplesA = apples;
}

void Apples::SetNumOfApplesB(int apples)
{
	NumOfApplesB = apples;
}

void Apples::SetNumOfApplesC(int apples)
{
	NumOfApplesC = apples;
}

void Apples::MinusApplesA(int apples)
{
	NumOfApplesA = NumOfApplesA - apples;
}

void Apples::MinusApplesB(int apples)
{
	NumOfApplesA = NumOfApplesA - apples;
}

void Apples::MinusApplesC(int apples)
{
	NumOfApplesA = NumOfApplesA - apples;
}


void Apples::GetRandNum()
{

	NumOfApplesA = rand() % 10 + 1;
	NumOfApplesB = rand() % 10 + 1;
	NumOfApplesC = rand() % 10 + 1;
}

int Apples::SetNGetTotal()
{
	TotalNumOfAppes = NumOfApplesA + NumOfApplesB + NumOfApplesC;
	return TotalNumOfAppes;

}

Apples::~Apples()
{
}
