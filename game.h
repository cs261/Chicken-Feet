class Game{
private:
	int turn{ 0 };
	int players{ 0 };
	int rounds{ 1 };
	int currTurn{ 0 };
public:
	Game(int nPlayers);
	Game(int nPlayers, int nRounds);
	
	void run();
	void start();
	void display();
	void options(ch);
	
	int getTurn(){ return (currTurn++ % players); };
	int setTurn(int start);
};
