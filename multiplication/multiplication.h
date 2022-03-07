#pragma once
#include "../CoreLibrary/CoreLibrary.h"

#ifdef MULTIPLICATION_EXPORTS
#define MULTIPLICATION_API __declspec(dllexport)
#else
#define MULTIPLICATION_API __declspec(dllimport)
#endif

class MULTIPLICATION_API Multiplication
{
	int a;
	int b;
public:

	Multiplication();

	void MultiplyNumbers(int a, int b, MathEngine& mathInstance);
};

extern MULTIPLICATION_API Multiplication* MultiplyNumbers();
