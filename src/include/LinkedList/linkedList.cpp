#include "linkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    root = NULL;
}

LinkedList::~LinkedList() 
{
    delete root;
}

void LinkedList::insert(ull key)
{
    Node *tmp = new Node;
    tmp->value = key;
    tmp->next = nullptr;

    if (root == NULL)
    {
        root = tmp;
        return;
    }

    Node *t = root;
    while (t->next != nullptr)
        t = t->next;

    t->next = tmp;
}

void LinkedList::print()
{
    Node *t = root;
    while (t != nullptr)
    {
        cout << t->value << " -> ";
        t = t->next;
    }
    cout << "NULL" << endl;
}

bool LinkedList::find(ull key)
{
    Node *t = root;
    while (t != nullptr)
    {
        if (t->value == key)
            return true;
        t = t->next;
    }
    return false;
}

ull &LinkedList::operator[](int i)
{
    Node *t = root;
    int j=0;
    while (t != nullptr && j < i)
        t = t->next;
    
    if(i == j) return t->value;

    return root->value;
}

void LinkedList::find(vector<ull> &tab) 
{
    cout << "Wyszukiwanie danych w liscie..." << endl;
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < tab.size(); i++)
        this->find(tab[i]);
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "Gotowe! Czas: " << elapsed_seconds.count() << "s\n";
}

void LinkedList::set(vector<ull> &tab)  
{
    cout << "Wprowadzanie danych do listy..." << endl;
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < tab.size(); i++)
        this->insert(tab[i]);
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "Gotowe! Czas: " << elapsed_seconds.count() << "s\n";
}