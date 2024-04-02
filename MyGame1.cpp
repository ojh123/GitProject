#include <iostream>

using namespace std;

class Unit
{
public:
	virtual void doMove() = 0; // 이거 구현해주세요
	virtual void dowalk() = 0; // 이거 구현해주세요
};

class Marine : public Unit
{
public:
	
};

class Zergling : public Unit
{
private:
public:
	void doMove(int n)
	{
		Unit::doMove(n);
		printf("저글링은 네 발로 이동합니다.\n");
	}
};

int main()
{
	Marine* mar1 = new Marine();
	mar1->doMove();
	mar1->dowalk();

	Zergling* zer1 = new zer1();
	zer1->doMove();
	zer1->dowalk();

	return 0;
}