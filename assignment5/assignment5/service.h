//  main.cpp
//  assignment5
//  Zhiting Lin
//  6270830
//  Created by chiting on 14-10-24.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#include "customer.h"

class Service{
private:
	int total_length;
	int *capacity;
	int *customerNum;
	Customer** line;
public:
	Service(int length = 10);
    Service(Service const &);
	void addCustomer(Customer );
	void serve();
	void display();
	int max();
    ~Service(){
        for(int i = 0; i < total_length; i++){
            delete [] line[i];
        }
        delete [] capacity;
        delete [] customerNum;
        delete [] line;
    };
};