#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

#include "./include/BST/bst.h"
#include "./include/LinkedList/linkedList.h"
#include "./include/HashTable/hashTable.h"

#define mini 1000000000
#define maxi 9999999999
#define ull unsigned long long
#define N 30000

using namespace std;

void generateNumbers(vector<ull> &tab, int amount)
{
    tab.clear();
    while (tab.size() < N)
    {
        ull num = rand() % (maxi - mini) + mini;

        if (find(tab.begin(), tab.end(), num) == tab.end())
            tab.push_back(num);
    }
}

int main()
{
    srand(time(0));
    vector<ull> tab;
    generateNumbers(tab, N);

    BST root;
    LinkedList head;
    HashTable ht(N);

    root.set(tab);
    head.set(tab);
    ht.set(tab);

    generateNumbers(tab, N);
    root.find(tab);
    head.find(tab);
    ht.find(tab);

    cout<<"End!"<<endl;

    return 0;
}