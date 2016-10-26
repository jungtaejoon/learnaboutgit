#include "prototypes.h"

int superglobal;

bool isPositive(double value)
{
	return value > 0;
}
bool absEqual(int a, int b)
{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	return a == b;
}
char getGrade(int grade)
{
	if (grade >= 80)
	{
		return 'A';
	}
	else if (grade >= 70)
	{
		return 'B';
	}
	else if (grade >= 60)
	{
		return 'C';
	}
	else if (grade >= 50)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}