//
//  TestCpp.hpp
//  Test Swift to CPP
//
//  Created by Mohammad Yasir on 2021-03-25.
//

#ifndef TestCpp_hpp
#define TestCpp_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Gist.h"


class TestCpp {
private:
    std::string str = "test";
    Gist<float> *gist;
public:
    TestCpp();
    ~TestCpp();
    std::string saySomething(int data[], int size);
};

#endif /* TestCpp_hpp */
