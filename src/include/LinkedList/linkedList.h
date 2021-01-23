#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

class LinkedList {
    protected:
    Node *root;

    public:
    LinkedList();
    LinkedList(int _val);
    void push(int _val);
    void print();
};

#endif // __NODE_H__