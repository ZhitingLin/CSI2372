//  CSI2372
//  Assignment3
//  Zhiting Lin
//  6270830


#include <iostream>
#include "player.h"
#include <vector>

using namespace std;

class SoccerTeam
{
    static const int d_PlayerNum = 11;
    //Create an array of pointer
    Player* d_players[d_PlayerNum];
	string d_name;
public:
	SoccerTeam( string _name = "Team A" );
    ~SoccerTeam();
	void tradePlayer( int _number, const Player& _p);
	void scores( int _number );
	void carded( int _number );
	void print( );
};






