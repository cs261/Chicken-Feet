#ifndef HAND_H
#define HAND_H

#include "card.h"
#include <vector>
#include <iostream>

using namespace std;

class Hand{
public:
	Hand();
	~Hand();

	void addBone(Bones *aBone);
	bool removeBone(int pos, Bone*& aBone);
	void print() const;
private:
	vector<Bone*> hand;
};
#endif
