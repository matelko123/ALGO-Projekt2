#ifndef __NODE_H__
#define __NODE_H__
#define ull unsigned long long
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

struct Node
{
    ull value;
    Node *next;
};

class LinkedList
{
protected:
    Node *root;

public:
    LinkedList();
    ~LinkedList();

    void insert(ull);
    void set(vector<ull> &);
    void print();

    bool find(ull);
    void find(vector<ull> &);

    ull &operator[](int);
};

#endif // __NODE_H__