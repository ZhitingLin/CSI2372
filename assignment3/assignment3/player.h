//  CSI2372
//  Assignment3
//  Zhiting Lin
//  6270830


#include <iostream>
#include <string>

using namespace std;

class Player{
	string d_firstName; 
	string d_lastName;
	int d_goals;
	int d_yellowCards;
	int d_redCards;

	public:
		Player(string _firstName, string _lastName);
		void score();
		void carded();
		void print();
};

