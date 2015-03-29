//  CSI2372
//  Assignment3
//  Zhiting Lin
//  6270830


#include "player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(string _firstName, string _lastName):d_firstName(_firstName),
			d_lastName(_lastName), d_goals(0),d_yellowCards(0),d_redCards(0){
		}

void Player::score(){
	d_goals++;
}

void Player::carded(){
	if(d_yellowCards < 4){
		d_yellowCards++;
	}else{
		d_yellowCards = 0;
		d_redCards ++;
	}
}

void Player::print(){
	cout << d_firstName <<" " << d_lastName << ", Counts of goals:"
		<< d_goals << " ,Yellow card: " << d_yellowCards <<
		" ,Red Card:" << d_redCards <<endl;
}