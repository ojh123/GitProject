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
	
};

int main()
{
	
	return 0;
}