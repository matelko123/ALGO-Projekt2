#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__
#define ull unsigned long long
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <chrono>
#include "../LinkedList/linkedList.h"

using namespace std;

class HashTable
{
private:
    LinkedList *tab;
    unsigned int amount;

    ull hash(ull);
    
public:
    HashTable(int);
    // ~HashTable();

    void print();
    void insert(ull);
    void set(vector<ull>);
    bool find(ull);
    void find(vector<ull> &);

    LinkedList &operator[](int);
};

#endif // __HASHTABLE_H__