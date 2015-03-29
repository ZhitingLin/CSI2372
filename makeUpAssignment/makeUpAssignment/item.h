//
//  item.h
//  makeUpAssignment
//
//  Created by chiting on 14-11-14.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#ifndef makeUpAssignment_item_h
#define makeUpAssignment_item_h
#include <stdlib.h>
class Item{
    double price;
    int quantity;
public:
	inline Item(double _price = 0, int _quantity = rand() % 5 + 1) :price(_price), quantity(_quantity){};
    inline operator int() const{return quantity;};
    inline Item& operator--(){
        quantity--;
        return *this;
    };
    friend bool operator!(const Item& it);
};


//notmember function.
inline bool operator!(const Item& it) {
    return (it.quantity <= 0)?true:false;
}
#endif
