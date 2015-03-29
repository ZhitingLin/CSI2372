//
//  client.h
//  makeUpAssignment
//
//  Created by chiting on 14-11-14.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#ifndef makeUpAssignment_client_h
#define makeUpAssignment_client_h
#include <vector>
#include "item.h"

template <class T,const int X>
class Client {
    std::vector<T> shoppingCart;
public:
    Client();
    //member function
    inline Client<T, X>& operator-=(T& it);
	bool isEmpty();
};

template <class T, const int X>
 Client<T,X>::Client() {
     int size = rand()%X +1;
     for (int i = 0; i <size; i++) {
         shoppingCart.push_back(T());
     }
     
}

//member function -=
template <class T, const int X>
Client<T, X>& Client<T,X>::operator-=(T& it) {
    T *items = &shoppingCart.front();
	typename std::vector<T>::iterator iterator = shoppingCart.begin();
	for (int i = 0; i < shoppingCart.size(); i++) {
        if ((*iterator+i) == it) {
            (*items) = it;
            break;
        }
    }
    --(*items);
    if (!(*items)) {
        //shoppingCart.pop_back();
		shoppingCart.erase(iterator);
    }
    return *this;
}

template <class T, const int X>
bool Client<T, X>::isEmpty() {
	return (shoppingCart.size() == 0);
}

#endif
