//
//  TestCppWrapper.m
//  Test Swift to CPP
//
//  Created by Mohammad Yasir on 2021-03-25.
//

#import <Foundation/Foundation.h>
#import "Test Swift to CPP-Bridging-Header.h"
#import "TestCpp.hpp"

@implementation TestCppWrapper

- (NSString *) saySomething:(int [])array {
    TestCpp testCpp;
    
    std::string message = testCpp.saySomething(array, 3);
    
    return [NSString stringWithCString:message.c_str() encoding:NSUTF8StringEncoding];
}

@end
