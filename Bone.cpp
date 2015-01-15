#include "Bone.h"
#include <iostream>
using namespace std;

Bone::Bone()
{
}

Bone::Bone(int top, int bottom) :
top(top), bottom(bottom)
{

}


Bone::~Bone()
{
}
void Bone::print() const 
{
	cout << endl;
	cout << top << " " << bottom << endl;
}

