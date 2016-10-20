#include <iostream>
#include <cmath>
using namespace std;
void printRoad(int x)
{
	for (size_t i = 0; i < x; i++)
	{
		cout << "*   *" << endl;
		cout << "* | *" << endl;
		cout << "* | *" << endl;
		cout << "*   *" << endl;
	}
}
int main()
{
	cout << "프로그램 시작!" << endl;
	printRoad(7);
	cout << "프로그램 끝" << endl;
	return 0;
}