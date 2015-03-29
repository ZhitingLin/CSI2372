//  Zhiting Lin 6270830
//  Assignment4

#include "heater.h"
#include <iostream>

float WaterHeater::GetPrice() const{
    return WaterHeater::d_price;
}

void WaterHeater::print(){
    std::cout << "Price: " << WaterHeater::d_price << std::endl;
    std::cout <<"Energy Source: "<< (char *[]){"Gas","Electricity","Oil","Solar_energy"}[WaterHeater::d_energySource]<< std::endl;
    std::cout << "Max GPM: " << WaterHeater::d_maxGPM<< std::endl;
    std::cout << "Energy Factor: "<< WaterHeater::d_energyFactor << std::endl;
    std::cout << "Energy Star: " << (WaterHeater::d_energyStar ? "true" : "false") << std::endl;
}

/*WaterHeater* WaterHeater::clone() const{
    return this;
}*/

float Tankless::installedPrice( bool _hookUp, bool _newVent )const{
    float price = GetPrice()*2;
    if (_hookUp) {
        price += 1000;
    }
    if (_newVent) {
        price += 500;
    }
    return price;
}

WaterHeater* Tankless::clone() const{
    return new Tankless(*this);
}

float StorageTank::installedPrice( bool _hookUp, bool _newVent ) const{
    float price = GetPrice()*1.5;
    if (_hookUp) {
        price += 500;
    }
    if (_newVent) {
        price += 300;
    }
    return price;
}

WaterHeater* StorageTank::clone() const{
    return new StorageTank(*this);
}