//
//  main.cpp
//  StringLinkList
//
//  Created by Hong Jik Lee on 9/30/19.
//  Copyright © 2019 Hong Jik Lee. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    LinkedList *myListPtr = new LinkedList();
    std::cout << "My list created!" << std::endl;
    
    //test isEmpty()
    bool tmpBool = myListPtr->isEmpty();
    std::cout << tmpBool << std::endl;
    
    //test push(string)
    string tmpStr = "hank";
    myListPtr->push(tmpStr);
    
    //test isEmpty()
    tmpBool = myListPtr->isEmpty();
    std::cout << tmpBool << std::endl;
    
    //test pop()
    tmpStr = "";
    tmpStr = myListPtr->pop();
    std::cout << tmpStr << std::endl;
    
    return 0;
}
