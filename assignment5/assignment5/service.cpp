//  main.cpp
//  assignment5
//  Zhiting Lin
//  6270830
//  Created by chiting on 14-10-24.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

#include "service.h"
#include <iostream>
#include <iterator>

Service::Service(int length){
	total_length = length;
	line = new Customer* [length];
	capacity = new int[length];
	customerNum = new int[length];// initally all 0

	for(int i = 0; i < length; i++){
		capacity[i] = 10;
        line[i] = new Customer[capacity[i]];
	}
    
    

}

void Service::addCustomer(Customer A){
	int leastCustomerLine = 0;
    // find the least lined customer
	for(int i = 1; i < total_length; i++){
		if(customerNum[i]<customerNum[leastCustomerLine]){
			leastCustomerLine = i;
		}
	}
    
    //increase the capacity of the line.
	if(customerNum[leastCustomerLine] == capacity[leastCustomerLine] ){
		capacity[leastCustomerLine] *=2;
        //create a temp array
        Customer* temp = new Customer[capacity[leastCustomerLine] ];
        
        for (int i = 0; i < customerNum[leastCustomerLine]; i++)
            temp[i] = line[leastCustomerLine][i];
        
        delete [] line[leastCustomerLine];
        line[leastCustomerLine] = temp;
	}

    //add customer.
	customerNum[leastCustomerLine]++;
    Customer *  ptr = line[leastCustomerLine];
    *(ptr+(customerNum[leastCustomerLine]-1)) = A;
 
}

void Service::serve(){
    for (int i = 0; i < total_length; i++) {
        if(customerNum[i] > 0){
            if(line[i][0].served()){
                customerNum[i]--;

                for (int j = 0; j< customerNum[i]; j++) {
                    line[i][j] = line [i][j+1];
                }
            }
        }
    }
}

void Service::display(){
    for (int i = 0; i < total_length; i++) {
        std::cout << "Service point " << i << " :" << customerNum[i] << std::endl;
    }
}

int Service::max(){
    int length = 0;
    for (int i = 0 ; i < total_length; i++) {
        length = (customerNum[i]>length)?customerNum[i]:length;
    }
    return length;
}
