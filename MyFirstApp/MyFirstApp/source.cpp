#include <iostream>
#include <string>
using namespace std;

void testFunc()
{
	static int runCount = 0;
	cout << "이 함수를 " << ++runCount << "번 실행했습니다." << endl;
}

int main()
{
	testFunc();
	testFunc();
}