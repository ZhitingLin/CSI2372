//
//  main.cpp
//  assignment2
//
//  Created by Zhiting Lin on 14-9-28.
//  Copyright (c) 2014 Zhiting. All rights reserved.
//
//  CSI2372
//  Zhiting Lin
//  6270830

#include <iostream>
#include "series.h"

using namespace std;

int main(int argc, const char * argv[]) {

    double limit;
    cout << "Please enter the limit to calculate LOG, EXP, FIB, FAC: ";
    cin >> limit;
    
    double *array;
    int length;
    double _mean;
    
    //for log
    array = getSeries(SERIES::LOG, limit, length);
    _mean = mean(array,length);
    
    cout << "The LOG series is ";
    printSeries(array, &array[length-1]);
    
    cout << ", mean is " << _mean << endl;
    
    //for exp
    array = getSeries(SERIES::EXP, limit, length);
    _mean = mean(array,length);
    
    cout << "The EXP series is ";
    printSeries(array, &array[length-1]);
    
    cout << ", mean is " << _mean << endl;
    
    //for FIB
    array = getSeries(SERIES::FIB, limit, length);
    _mean = mean(array,length);
    
    cout << "The FIB series is ";
    printSeries(array, &array[length-1]);
    
    cout << ", mean is " << _mean << endl;
    
    //for FAC
    array = getSeries(SERIES::FAC, limit, length);
    _mean = mean(array,length);
    
    cout << "The FAC series is ";
    printSeries(array, &array[length-1]);
    
    cout << ", mean is " << _mean << endl;
    
    return 0;
}
