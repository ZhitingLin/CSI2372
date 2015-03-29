//
//CSI2372
//Assginment2
//Zhiting Lin
//6270830

#include "series.h"
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

double* getSeries( SERIES _s, double _limit, int& _length ){
	
    double result;
    vector<double> container;
    double *array;

	switch (_s)
	{
	case SERIES::LOG:
		for (int i = 0; result <= _limit; i++)
		{
			result = i - pow(i,2)/2 +pow(i,3)/3;
            container.push_back(result);
		}
		break;
	case SERIES::EXP:
		for (int i = 0; result <= _limit; i++)
		{
			result = 1 + i + pow(i,2)/(1*2) + pow(i,3)/(1*2*3) + pow(i,4)/(1*2*3*4);
            container.push_back(result);
		}
		break;
	case SERIES::FIB:
        for (int i = 0; result <= _limit; i++) {
                result = FIB(i);
                container.push_back(result);
            }

		break;
	case SERIES::FAC:
            for (int i = 0; result <= _limit; i++) {
                result = FAC(i);
                container.push_back(result);
            }
		break;
	default:
		break;
	}
    
    _length = (int)container.size()-1;
    array = &container[0];
    
	return array;
}

double mean( double* _values, int length ){
    double average = 0;
    for (int i =0; i < length; i++) {
        average += *_values++;
    }
    average /= length;
    
    return average;
}

void printSeries( double* _first, double* last ){
    double* iterator;
    cout << "[ ";
    for (iterator = _first; iterator!= last; iterator++) {
        cout << *iterator << " ";
    }
    cout << *iterator <<"] ";
}

double FIB(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return (FIB(n-1)+FIB(n-2));
	}
}

double FAC(int n){
	if(n == 0 ||n ==1){
		return 1;
	}else{
		return n*FAC(n-1);
	}
}