#include <iostream>

using namespace std;

class Unit
{
public:
	virtual void doMove() = 0; // �̰� �������ּ���
	virtual void dowalk() = 0; // �̰� �������ּ���
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
		printf("���۸��� �� �߷� �̵��մϴ�.\n");
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