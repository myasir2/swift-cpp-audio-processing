//
//  TestCpp.cpp
//  Test Swift to CPP
//
//  Created by Mohammad Yasir on 2021-03-25.
//

#include "TestCpp.hpp"

TestCpp::TestCpp() {
    std::cout << "Initializing Gist in constructor" << std::endl;
    
    this->gist = new Gist<float>(512, 44100);
}

TestCpp::~TestCpp() {
    std::cout << "Deallocating Gist in destructor" << std::endl;
    
    delete this->gist;

    this->gist = nullptr;
}

std::string TestCpp::saySomething(int data[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << "Data val: " << data[i] << std::endl;
    }
    
    return "Heeeyy";
}
