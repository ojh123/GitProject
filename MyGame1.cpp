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
	
};

int main()
{
	
	return 0;
}