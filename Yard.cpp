#include "Yard.h"
#include <iostream>
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

void Yard::print() const
{
	cout << endl;
	for (auto it = deck.cbegin(); it != deck.cend(); it++)
	{
		(*it)->print();
		cout<< endl << endl;
	}
	
}
