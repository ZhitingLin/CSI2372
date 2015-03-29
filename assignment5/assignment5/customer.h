//  main.cpp
//  assignment5
//  Zhiting Lin
//  6270830
//  Created by chiting on 14-10-24.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

class Customer{
private:
	int items;
public:
	Customer();
    Customer(Customer& cus) = default;
	bool served();
    ~Customer() = default;
};