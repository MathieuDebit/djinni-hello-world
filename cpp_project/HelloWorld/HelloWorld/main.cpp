//
//  main.cpp
//  HelloWorld
//
//  Created by DEBIT Mathieu on 13/03/2017.
//  Copyright © 2017 DEBIT Mathieu. All rights reserved.
//

#include <iostream>
#include "hello_world_impl.hpp"

int main(int argc, const char * argv[]) {
    
    helloworld::HelloWorldImpl hw = helloworld::HelloWorldImpl();
    
    std::string myString = hw.get_hello_world();
    
    std::cout << myString << "\n";
    
    return 0;
}
