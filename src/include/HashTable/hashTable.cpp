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

bool HashTable::find(ull key)
{
    ull hash_val = hash(key);
    return tab[hash_val].find(key);
}

void HashTable::find(vector<ull> &tab) 
{
    cout << "Wyszukiwanie danych w tablicy z hashowaniem..." << endl;
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < tab.size(); i++)
        this->find(tab[i]);
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "Gotowe! Czas: " << elapsed_seconds.count() << "s\n";
}

void HashTable::set(vector<ull> tab)  
{
    cout << "Wprowadzanie danych do tablicy z hashowaniem..." << endl;
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < tab.size(); i++)
        this->insert(tab[i]);
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "Gotowe! Czas: " << elapsed_seconds.count() << "s\n";
}