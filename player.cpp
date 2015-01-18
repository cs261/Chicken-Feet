#include <iostream>
#include "player.h"
#include "hand.h"

using namespace std;

//constructor / destructor
Player::Player(){}

Player::~Player(){}	

//mutator functions
bool Player::drawBone(Yard * yard)
{
	Bone * aBone;
	bool done = false;

	if (yard->deal(aBone))
	{
		hand.addBone(aBone);
		done = true;
	}
	return done;
}

bool Player::playBone(Bone*& aBone)
{
	return hand.removeBone(0, aBone);
}

//accessor functions
void Player::getScore() const
{
	cout << "Player score: " << hand.getHandScore() << endl << endl;
}

void Player::getHand() const
{
	cout << "Bones in hand: " << endl;
	hand.print();
	cout << endl << endl;
}
