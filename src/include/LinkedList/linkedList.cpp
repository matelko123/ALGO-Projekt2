#include "linkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() 
{
    root = NULL;
}

void LinkedList::insert(int key)
{
    Node *tmp = new Node;
    tmp->value = key;
    tmp->next = nullptr;

    if(root == NULL)
    {
        root = tmp;
        return;
    }

    Node *t = root;
    while(t->next != nullptr) t = t->next;
    
    t->next = tmp;
}

void LinkedList::print()
{
    Node *t = root;
    while(t != nullptr)
    {
        cout<<t->value<<" ";
        t = t->next;
    }
    cout<<endl;
}

bool LinkedList::find(int key)
{
    Node *t = root;
    while(t != nullptr)
    {
        if(t->value == key) return true;
        t = t->next;
    }
    return false;
}