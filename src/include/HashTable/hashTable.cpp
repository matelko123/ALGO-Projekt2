#include "hashTable.h"

HashTable::HashTable(int _amount): amount(_amount)
{
    tab = new LinkedList[amount];
}

void HashTable::print() 
{
    for(int i = 0; i < amount; i++)
    {
        tab[i].print();
        cout<<"\t";
    }
    cout<<endl;
}

ull HashTable::hash(ull val) 
{
    return val%amount;
}

void HashTable::insert(ull val) 
{
    ull hash_val = hash(val);
    tab[hash_val].insert(val);
}


LinkedList &HashTable::operator[](int i)
{
    if(i > amount) 
        return tab[0];
         
    return tab[i];
}


void HashTable::set(vector<ull> &tab)  
{
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < tab.size(); i++)
        this->insert(tab[i]);
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}