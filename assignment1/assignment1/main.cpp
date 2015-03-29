//
//  main.cpp
//  CSI2372_lab_assignment1
//
//  Created by zhiting on 14-9-18.
//  Copyright (c) 2014年 chiting. All rights reserved.
//
//  Zhiting Lin. 6270830


#include <iostream>
#include "double_arrays.h"

int main(int argc, const char * argv[]) {
    std::cout << "CSI2372 assignment 1 \nZhiting Lin, 6270830" <<std::endl;
    
    //vectDistance
    double array1[] = {0.595500,0.652927,0.606763,0.162761,0.980752,0.964772,0.319322,0.611325,0.012422,0.393489};
    double array2[] = {0.416132,0.778858,0.909609,0.094812,0.380586,0.512309,0.638184,0.753504,0.465674,0.674607};
    std::cout << "1. The Euclidean distance between the two vectors is " << vectDistance(array1, array2)<<std::endl;
    
    //closetPair
    double array[][10] = {{0.183963,0.933146,0.476773,0.086125,0.566566, 0.728107, 0.837345, 0.885175, 0.600559, 0.142238},{0.086523, 0.025236, 0.252289, 0.089437, 0.382081, 0.420934, 0.038498, 0.626125, 0.468158, 0.247754},{0.969345, 0.127753, 0.736213, 0.264992, 0.518971, 0.216767, 0.390992, 0.242241, 0.516135, 0.990155}
    };
    
    double *outa = new double[vSize];
    double *outb = new double[vSize];
    closestPair(array, 3, outa, outb);
    
    std::cout << "2. "<<"Vector A is " ;
    printResult(outa);
    std::cout << "Vector B is " ;
    printResult(outb);
    
    return 0;
}

void printResult(double myArray[]){
    for (int i = 0; i < vSize; ++i)
    {
        std::cout << myArray[i]<< ' ';
    }
    std::cout << std::endl;
}

