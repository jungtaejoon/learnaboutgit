#include <iostream>
using namespace std;
char getGrade(int x)
{
	if (x >= 80) return 'A';
	else if (x >= 70) return 'B';
	else if (x >= 60) return 'C';
	else if (x >= 50) return 'D';
	else return 'F';
}
int main()
{
	cout << getGrade(78) << endl;
}