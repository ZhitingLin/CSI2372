// double_arrays.cpp : Defines the entry point for the console application.
//
//CSI2372
//Zhiting Lin
//6270830
#include <math.h>
#include "double_arrays.h"
#include <iostream>

double vectDistance(double *a, double *b){
	double sumup = 0;
	for (int i = 0; i < vSize; i++)
	{
		sumup += pow(*(a+i)-*(b+i),2);
	}
	return sqrt(sumup);
}

void closestPair(double (*bag)[vSize], unsigned int nVec,double *outa,double *outb){
    int i = 0,j = 1;

    double smalldistance = vectDistance(bag[i],bag[j]);
    
    for (int j1 = 2;j1< nVec; j1++) {
        for (int i1 = 0; i1 < j1; i1++) {
            double distance = vectDistance(bag[i1],bag[j1]);
            if(distance<smalldistance)
            {
                smalldistance=distance;
                i = i1;
                j = j1;
            }
        }
    }
    //dereference and write to the address
    for (int k = 0; k < vSize; k++) {
        *(outa+k) = *(bag[i]+k);
        *(outb+k) = *(bag[j]+k);
    }
}