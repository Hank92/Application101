//
//  LinkedList.h
//  StringLinkList
//
//  Created by Hong Jik Lee on 9/30/19.
//  Copyright © 2019 Hong Jik Lee. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h
#include <string>
using std::string;

class LinkedList {
private:
    class ListNode {
    public:
        string contents;
        ListNode *next;
        ListNode(string pContents) {contents = pContents; next=NULL;};
    };
    ListNode *head;
public:
    LinkedList();
    void push(string pItem);
    string pop();
    bool isEmpty();
};

#endif /* LinkedList_h */
