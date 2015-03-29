//
//  main.cpp
//  assignment5
//  Zhiting Lin
//  6270830
//  Created by chiting on 14-10-24.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#include <iostream>
#include "service.h"

int main(int argc, const char * argv[]) {
    Service *supermarket = new Service(17);
    
    for (int i = 0 ; i < 10000; i++) {
        if (supermarket->max() == 20) {
            break;
        }
        Customer* A = new Customer();
        Customer* B = new Customer();
        Customer* C = new Customer();
        supermarket->addCustomer(*A);
        supermarket->addCustomer(*B);
        supermarket->addCustomer(*C);
        
        supermarket->serve();
        std::cout << "loop" <<i<<std::endl;
        supermarket->display();
        
    }
    
    delete supermarket;
    return 0;
}
