//  Zhiting Lin 6270830
//  main.cpp
//  assignment4
//
//  Created by Zhiting on 14-10-11.
//  Copyright (c) 2014年 Zhiting. All rights reserved.
//

#include <iostream>
#include "heater.h"
#include "house.h"

int main(int argc, const char * argv[]) {
    StorageTank original(1000.0,WaterHeater::FUEL::Gas,8.0,0.55);
    House myHouse;
    std::cout << "myHouse: "<<std::endl;
    myHouse.installWaterHeater(&original, true, true);
    myHouse.printWaterHeater();

    House otherHouse(myHouse);
    otherHouse.removeWaterHeater();
    Tankless other(2000, WaterHeater::FUEL::Gas, 12.0, 0.93);
    std::cout << "otherHouse: "<<std::endl;
    otherHouse.installWaterHeater(&other, false, true);
    otherHouse.printWaterHeater();
    return 0;
}
