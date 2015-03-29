//  main.cpp
//  assignment5
//  Zhiting Lin
//  6270830
//  Created by chiting on 14-10-24.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#include "customer.h"
#include <stdlib.h>

Customer::Customer(){
	items = rand() % 100 + 1; 
}

bool Customer::served(){
	bool ReachZ = false;
	items -= 10;
	if(items < 0 ){
		ReachZ = true;
		items = 0;
	}
	return ReachZ;
}