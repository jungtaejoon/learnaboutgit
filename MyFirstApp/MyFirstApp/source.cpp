#include <iostream>
using namespace std;
enum Food
{
	Fish,
	Bread,
	Apple,
	Orange
};

int main()
{
	Food food = Bread;
	switch (food)
	{
	case Fish:
		cout << "여기 맛있는 물고기가 있습니다." << endl;
		break;
	case Bread:
		cout << "냠냠! 빵이 맛좋군요." << endl;
		break;
	case Apple:
		cout << "음. 과일은 좋습니다." << endl;
		break;
	case Orange:
		cout << "오렌지 당신은 제가 바나나라고 말 안 해서 기쁘겠죠." << endl;
		break;
	default:
		cout << "음식이 없습니다." << endl;
		break;
	}
}