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

	cout << endl << "Deal a card: " << endl;
	deck->deal(aBone);
	aBone->print();
	cout << endl;


	return 0;
}

