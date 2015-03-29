//  Zhiting Lin
//  6270830
//  house.h
//  assignment4
//
//  Created by chiting on 14-10-12.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#ifndef __assignment4__house__
#define __assignment4__house__

#include <stdio.h>
#include "heater.h"

class House{
    WaterHeater* d_waterHeater;
public:
    House() = default;
    House(House &other):d_waterHeater(other.d_waterHeater){};
    //House(WaterHeater &waterHeater): d_waterHeater(&waterHeater){};
    void installWaterHeater( WaterHeater const *, bool, bool );
    WaterHeater* removeWaterHeater( );
    void printWaterHeater( );
};

#endif /* defined(__assignment4__house__) */
