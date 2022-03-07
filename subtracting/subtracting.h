#pragma once
#include "../CoreLibrary/CoreLibrary.h"

#ifdef SUBTRACTING_EXPORTS
#define SUBTRACTING_API __declspec(dllexport)
#else
#define SUBTRACTING_API __declspec(dllimport)
#endif

class SUBTRACTING_API Subtraction
{
	int a;
	int b;
public:

	Subtraction();

	void SubtractNumbers(int a, int b, MathEngine& mathInstance);
};

extern SUBTRACTING_API Subtraction* SubtractNumbers();
