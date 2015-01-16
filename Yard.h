
#include <iostream>
#include <vector>
#include "Bone.h"

using namespace std;

class Yard
{
public:
	Yard(int players);
	~Yard();

	//void shuffleDeck();
	//bool deal(Bone* &abone);
	void print() const;
	int getPlayerCount() const{
		return playerCount;
	}
	//void setPlayerCount(int newCount);
	

private:
	vector<Bone*> deck;

	int playerCount; 
};

