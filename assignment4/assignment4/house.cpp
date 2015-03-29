//  Zhiting Lin
//  6270830
//  house.cpp
//  assignment4
//
//  Created by chiting on 14-10-12.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#include "house.h"
#include <iostream>

void House::installWaterHeater( WaterHeater const * waterheater, bool _hookup, bool _newVent){
    House::d_waterHeater = waterheater -> clone();
    std::cout << "Install price: " << waterheater->installedPrice(_hookup,_newVent) << std::endl;
}

WaterHeater* House::removeWaterHeater( ){
    
    delete House::d_waterHeater;
    return House::d_waterHeater;
    //delete House::d_waterHeater;
    
}

void House::printWaterHeater( ){
    House::d_waterHeater -> print();
}