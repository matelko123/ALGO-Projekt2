#include "linkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    this->root = new Node;
}

LinkedList::LinkedList(int _val)
{
    this->root = new Node;
    this->root->value = _val;
}

void LinkedList::push(int _val)
{
    Node *tmp = new Node;
    tmp->value = _val;
    tmp->next = NULL;

    if (!this->root)
        this->root = tmp;
    else 
        this->root->next = tmp;
}

void LinkedList::print()
{
    Node *tmp = this->root;
    while(tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }

    cout<<endl;
}
