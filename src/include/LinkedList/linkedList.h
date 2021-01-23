#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

class LinkedList
{
private:
    Node *root;

public:
    LinkedList();

    void insert(int);
    void print();

    bool find(int);
};

#endif // __NODE_H__