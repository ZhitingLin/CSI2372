//
//  main.cpp
//  makeUpAssignment
//
//  Created by chiting on 14-11-14.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#include <iostream>
#include "service.h"
#include "item.h"
#include "client.h"

int main(int argc, const char * argv[]) {
    const int numIter = 10000;
    const int numCost = 2;
    //Service<20> servicept(17);
    Service<20> servicept;
    for (int i = 0; i<numIter; i++) {
        for (int j = 0; j < numCost; j++) {
            Client<Item, 20> c;
            servicept+=c;
        }
		*servicept;
		if (i ==9999){
			std::cout << i <<": "<< servicept << std::endl;
		}
		
    }
    
    std::cout << "After " << numIter << ": " << std::endl;
    std::cout << servicept << std::endl;
    
    std::cout << "Maximum line length: " << (+servicept) << std::endl;
    
    return 0;
}
