// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "game.h"
using namespace std;

Game::Game(int nPlayers): players(nPlayers){
}

Game::Game(int nPlayers, int nRounds): players(nPlayers), rounds(nRounds){}

int Game::setTurn(int player){
	currTurn = player;
}

void Game::run(){
	start();
	do{
		do{
		display();
		cin >> ch;
		options(ch);
		}while(ch != toUpper("p") || ch != toUpper("d"));

	}while(player[currTurn].getScore() > 0 && Yard.isEmpty());
	getTurn();
}

Game::start(){
	cout << "Welcome to Chicken-Feet the game!!" << endl;
	cout << "please enter how many players will play: ";
	cin  >> nPlayers;
	vector<Player> players;
	
	for(int i = 0; i < nPlayers; i++){
		players.push_back(new Player());
	}
	cout << endl << "Dealing 7 cards!" << endl;
	Yard * deck = new Yard(1);
	deck->shuffleDeck();
	for(int i=0; i < MAXCARDS; i++){
		for(int j = 0; j <= nPlayers; j++){
			players.at(j)->drawBone(deck);
		}
	}
}
Game::display(){
	cout << "Press (H) to show hand" << endl;
	cout << "Press (P) to play a Bone" << endl;
	cout << "Press (D) to draw a Bone" << endl;
	cout << "Press (S) to see your Score" << endl;
}
Game::option(ch){
	switch(ch){
		case 'H':
			player.at(currTurn)->getHand();
		case 'P': 
			player.at(currTurn)->playBone();
		case 'D':
			player.at(currTurn)->drawBone();
		case 'S':
			player.at(currTurn)->getScore();
		default:
			cout << "Please enter a valid command.";
	}
}
