//
//  service.h
//  makeUpAssignment
//
//  Created by chiting on 14-11-14.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#ifndef __makeUpAssignment__service__
#define __makeUpAssignment__service__

#include <stdio.h>
#include "client.h"
#include <deque>

template <const int X>
class Service;

template <const int X>
std::ostream& operator<< (std::ostream& _out, const Service<X>& _pt);

template <const int X>
class Service{
    std::vector<std::deque<Client<Item, X>>> servicePoints;
    int NumLine;
public:
    inline Service(int _noLine = 17);
	//member function;
    inline Service<X>& operator+=(Client<Item, X>& clients);
    inline Service<X>& operator*();

    //nonmember function 
	//template <const int X>
    friend std::ostream& operator<< <X>( std::ostream& _out, const Service<X>& _pt );
	//template <const int X>
    friend int operator+ (const Service<X>& _pt);

};


//serve the customer at the head of each deque
template <const int X>
Service<X>& Service<X>::operator*(){
	for (typename std::vector<std::deque<Client<Item, X>>>::iterator it = servicePoints.begin(); it != servicePoints.end(); it++) {
		if ((*it).size() == 0){
			//servicePoints.erase(it);
			continue;
		}
		else{
			typename std::deque<Client<Item, X>>::iterator client = (*it).begin();
			while (!(*client).isEmpty()) 
			{
                //<Client<Item, X> a = *client;
                Item a;
				(*client) -= a;
			}
			//(*it).pop_front();
			(*it).erase(client);
		}
		
	}
	return *this;
}

template <const int X>
Service<X>::Service(int _noLine) :NumLine(_noLine){
	for (int i = 0; i < NumLine; i++) {
		std::deque<Client<Item, X>> d;
		servicePoints.push_back(d);
	}
}

template <const int X>
Service<X>& Service<X>::operator+=(Client<Item, X>& clients) {
	std::deque<Client<Item, X>> *shortestPath = &servicePoints.front();
	
		for (int i = 0; i < NumLine; i++) {
			if ((servicePoints.at(i)).size() < (*shortestPath).size()) {
				shortestPath = &servicePoints.at(i);
			}
		}

		(*shortestPath).push_back(clients);
	
	return *this;
}

template <const int X>
inline std::ostream& operator<< (std::ostream& _out, const Service<X>& _pt) {
	for (int i = 0; i < _pt.NumLine; i++) {
		//for (std::deque<Client<Item, X>> it = _pt.servicePoints.begin(); it != _pt.servicePoints.end(); it++) {
		_out << _pt.servicePoints.at(i).size() << " ";
	}
	return _out;
}

template <const int X>
inline int operator+(const Service<X>& _pt) {

	int max = 0;
	for (int i = 0; i < _pt.NumLine; i++) {
		//for (std::deque<Client<Item, X>> it = _pt.servicePoints.begin(); it != _pt.servicePoints.end(); it++) {
		max = ((_pt.servicePoints.at(i).size()) > max) ? _pt.servicePoints.at(i).size() : max;
	}
	return max;
}


template class Service<17>;

#endif /* defined(__makeUpAssignment__service__) */
