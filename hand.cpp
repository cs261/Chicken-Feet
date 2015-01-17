#include <iostream>
#include <vector>
#include "hand.h"

using namespace std;

//constructor/destructor
Hand::Hand() : playerScore(0){}

Hand::~Hand()
{
	for (auto it = hand.begin(); it != hand.end(); it++)
	{
		delete *it;
	}
}

//mutator functions
void Hand::addBone(Bone* aBone)
{
	hand.push_back(aBone);

	int top = aBone->getTop();
	int bottom = aBone->getBottom();

	playerScore += top + bottom;
}

bool Hand::removeBone(int pos, Bone*& aBone)
{
	if (pos < 0 || pos >= hand.size())
		return false;
	aBone = hand.at(pos);
	hand.erase(hand.begin() + pos);

	int top = aBone->getTop();
	int bottom = aBone->getBottom();

	playerScore -= top + bottom;

	return true;	 
}

//accessor function
int Hand::getPlayerScore() const
{
	return playerScore;
}

void Hand::print() const
{
	for (auto it = hand.cbegin(); it != hand.cend(); it++)
	{
		(*it)->print();
		cout << " ";
	}
	cout << endl << endl;
}
