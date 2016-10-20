#include <iostream>
using namespace std;
enum Mount
{
	Horse = 1,
	Mare,
	Mule,
	Sheep,
	Chocobo
};

int main()
{
	int mount;
	cout << "1~5번 탈것을 선택해주세요." << endl;
	cin >> mount;
	switch (mount)
	{
	case Horse:
		cout << "이 말은 용맹스럽고 강합니다." << endl;
		break;
	case Mare:
		cout << "이 암말은 하얀 색이고 예쁩니다." << endl;
		break;
	case Mule:
		cout << "당신은 노새를 타게 되었습니다. 당신은 이에 분노합니다." << endl;
		break;
	case Sheep:
		cout << "메에! 양은 당신이 타고 다니기 조금 힘들어 보입니다." << endl;
		break;
	case Chocobo:
		cout << "초코보!" << endl;
		break;
	default:
		cout << "Invalid mount" << endl;
		break;
	}
}