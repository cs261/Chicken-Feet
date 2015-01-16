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
	deck->print();	

	return 0;
}

