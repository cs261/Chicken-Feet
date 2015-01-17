#ifndef PLAYER_H
#define PLAYER_H

#include "bone.h"
#include "hand.h"
#include "yard.h"
#include <iostream>

using namespace std;

class Player
{
public:
	//contructors
	Player();

	//destructor
	~Player();

	//mutator functions
	bool drawBone(Yard * yard);
	bool playBone(Bone*& aBone);

	//accessor functions 
	void print() const;

private:
	Hand hand;
};

#endif;