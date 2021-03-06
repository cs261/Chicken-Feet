#include "Yard.h"
#include <iostream>
#include <vector>
#include <algorithm> 	//std::shuffle
#include <random>  		//default_random_engine
#include <chrono>		//chrono::system_clock
using namespace std;


Yard::Yard(int players):
playerCount(players)
{
	players = 1;
	Bone * currBone;
	for (int i = 0; i <= 9; ++i){
		for (int j = i; j <= 9; ++j){
			currBone = new Bone(i, j);
			deck.push_back(currBone);
		}
	}
}

Yard::~Yard()
{
}
bool Yard::deal(Bone* &aBone) 
{
	if (deck.size() == 0)
		return false;
	aBone = deck.back();
	deck.pop_back();
	return true;
}
void Yard::shuffleDeck() 
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));
}
void Yard::print() const
{
	for (auto it = deck.begin(); it != deck.end(); it++)
	{
		(*it)->print();
	}
	
}
