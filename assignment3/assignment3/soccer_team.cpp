//  CSI2372
//  Assignment3
//  Zhiting Lin
//  6270830


#include "soccer_team.h"
#include <iostream>
#include <string>



SoccerTeam::SoccerTeam( string _name):
	d_name(_name)
{
	char letter = 'A';
	for(int i = 0; i < d_PlayerNum; i++){
        d_players[i] = new Player(string(1,letter), d_name);
        letter = static_cast<char>(letter + 1);
	}
}

void SoccerTeam::tradePlayer( int _number, const Player& _p){
    
    *d_players[_number] = _p;
}

SoccerTeam::~SoccerTeam(){
    for (int i = 0; i < d_PlayerNum; i++) {
        delete d_players[i];
    }
    //delete d_players;
}

void SoccerTeam::scores( int _number ){
    Player &Temp = *(d_players[_number]);
    Temp.score();
}

void SoccerTeam::carded( int _number ){
    Player &Temp = *(d_players[_number]);
    Temp.carded();
}

void SoccerTeam::print( ){
    std::cout << "Team Name: " << d_name << std::endl;
    for (int i = 0 ; i < d_PlayerNum; i++) {
        Player temp = *d_players[i];
        temp.print();
        //d_players[i].print();
    }
}