#include<iostream>
#include"hand.h"

Hand::Hand(){}
Hand:: ~Hand(){
	for(auto it = hand.begin(); it != hand.end(); it++){
		delete *it;
	}
}

void Hand::addBone(Bone * bone){
	hand.push_back(bone);
}

bool Hand::removeBone(int pos, Bone*& abone){
	if(pos < || pos >= hand.size())
		return false;
	abone = hand.at(pos);
	hand.erase(hand.begin + pos);
	return true;

}
Void print() const {
	for(auto it = hand.cbegin(); it != hand.cend(); it++){
		(*it)->print();
		cout << " ";
	}
	cout << endl << endl;
}
