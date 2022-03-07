#pragma once
#include "../CoreLibrary/CoreLibrary.h"

#ifdef DIVISION_EXPORTS
#define DIVISION_API __declspec(dllexport)
#else
#define DIVISION_API __declspec(dllimport)
#endif

class DIVISION_API Division
{
	int a;
	int b;
public:

	Division();

	void DivideNumbers(int a, int b, MathEngine& mathInstance);
};

extern DIVISION_API Division* DivideNumbers();
