#include <iostream>
#include <string>
using namespace std;

string g_string;

void addA() { g_string += "A"; }
void addB() { g_string += "B"; }
void addC() { g_string += "C"; }

int main()
{
	addA();
	addB();
	cout << g_string << endl;
	addC();
	cout << g_string << endl;
}