#include <iostream>
#include <stdlib.h>
#include "game.h"
#include "Bone.h"
#include "Yard.h"

using namespace std;

int main()
{
	Bone *aBone = new Bone(1,1);
	cout << "Bone: " << aBone->getTop() << endl;

	Yard * deck = new Yard(1);
	cout << "Print the deck: " << endl;
	deck->print();	
	
	cout << endl << "After shuffle: " << endl;
	deck->shuffleDeck();
	deck->print();

	cout << endl << "Deal a bone: " << endl;
	deck->deal(aBone);
	aBone->print();
	cout << endl;
	
	Hand * aHand = new Hand();
	aHand->addBone(new Bone(8,2));
	aHand->addBone(new Bone(3,5));
	aHand->addBone(new Bone(2,4));
	aHand->addBone(new Bone(2,6));
	aHand->addBone(new Bone(4,4));
	
	cout << "Hand after dealing: " << endl;
	aHand->print();
	cout << endl;
	
	aHand->removeBone(0, aBone);
	aHand->removeBone(1, aBone);
	
	cout << "Hand after removing: ";
	aHand->print();
	
	cout << "Player1 draws 5 bones: " << endl;
	Player * player1 = new Player();
	for(int i = 0; i < 5; i++){
		player1->drawBone(yard);
	}
	player1->print();
	
	cout << "Player1 plays a bone: ";
	player1->playBone(aBone);
	aBone->print();
	
	cout << "Player1's Hand after playing: " << endl;
	player1->print();
	
	return 0;
}

