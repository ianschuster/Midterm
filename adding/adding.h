#pragma once
#include "../CoreLibrary/CoreLibrary.h"

#ifdef ADDING_EXPORTS
#define ADDING_API __declspec(dllexport)
#else
#define ADDING_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ADDING_API Addition
{
	int a;
	int b;
public:

	Addition();

	void AddNumbers(int a, int b, MathEngine& mathInstance);
};

extern ADDING_API Addition* AddNumbers();
