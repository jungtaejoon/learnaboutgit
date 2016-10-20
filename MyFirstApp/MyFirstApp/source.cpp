#include <iostream>
#include <cmath>
using namespace std;
bool isPositive(double x)
{
	return x > 0;
}
int main()
{
	cout << "프로그램 시작!" << endl;
	cout << boolalpha << isPositive(2.3) << endl;
	cout << "프로그램 끝" << endl;
	return 0;
}