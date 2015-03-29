//  Zhiting Lin 6270830
//  Assignment4

#ifndef __assignment4__heater__
#define __assignment4__heater__

class WaterHeater{

public:
    enum FUEL {Gas,Electricity,Oil,Solar_energy};
	WaterHeater() = default;
    WaterHeater(float price, FUEL engergySource, float maxGPM, float energyFactor, bool engergyStar):d_price(price), d_energySource(engergySource),d_maxGPM(maxGPM), d_energyFactor(energyFactor),d_energyStar(engergyStar){};
    //copy constructor.
    WaterHeater(WaterHeater const & other):d_price(other.d_price),d_energySource(other.d_energySource),d_maxGPM(other.d_maxGPM),d_energyFactor(other.d_energyFactor),d_energyStar(other.d_energyStar){};
	float GetPrice() const;
	void print();
	virtual WaterHeater* clone() const = 0;
	virtual float installedPrice( bool _hookUp, bool _newVent )const = 0;
    virtual ~WaterHeater() = default;
    
private:
    float d_price;
    FUEL d_energySource ;
    float d_maxGPM ;
    float d_energyFactor;
    bool d_energyStar;
};


class Tankless: public WaterHeater{
public:
    Tankless(float price, FUEL engergySorce, float maxGPM, float energyFactor):WaterHeater(price, engergySorce,maxGPM,energyFactor,true){};
    //copy constructor
    Tankless(WaterHeater &original):WaterHeater(original){};
    WaterHeater* clone() const;
    float installedPrice( bool _hookUp, bool _newVent ) const;
};

class StorageTank: public WaterHeater{
public:
    StorageTank(float price, FUEL engergySorce, float maxGPM, float energyFactor):WaterHeater(price, engergySorce,maxGPM,energyFactor,false){};
    StorageTank(WaterHeater &original):WaterHeater(original){};
    WaterHeater* clone() const;
    float installedPrice( bool _hookUp, bool _newVent ) const;
};

#endif /* defined(__assignment4__heater__) */