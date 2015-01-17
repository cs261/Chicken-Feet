#ifndef HAND_H
#define HAND_H

#include "bone.h"
#include <vector>
#include <iostream>

using namespace std;

class Hand
{
public:

	//constructors
	Hand();

	//destructor
	~Hand();

	//mutator functions
	void addBone(Bone* aBone);
	bool removeBone(int pos, Bone*& aBone);
	
	//accessor function
	void print() const;
	int getPlayerScore() const;

private:
	vector<Bone*> hand;
	int playerScore;
	
};

#endif;
