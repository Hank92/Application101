//
//  LinkedList.cpp
//  StringLinkList
//
//  Created by Hong Jik Lee on 9/30/19.
//  Copyright © 2019 Hong Jik Lee. All rights reserved.
//

#include <stdio.h>
#include "LinkedList.h"

LinkedList::LinkedList() {
    return ;
}

void LinkedList::push(string pItem){
    ListNode *tmp = new ListNode(pItem);
    if (!head) {
        head = tmp;
    }
    else {
        head->next = tmp;
        tmp->prev = head;
        head = head->next;
    }
}

string LinkedList::pop() {
    string rVal = "";
    if (!head) return rVal;
    else {
        ListNode *tmp = head->prev;
        rVal = head->contents;
        head = tmp;
        return rVal;
    }
}

bool LinkedList::isEmpty() {
    bool rVal = true;
    if (!head) return rVal;
    else return !rVal;
    return rVal;
}
