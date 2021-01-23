#ifndef __BST_H__
#define __BST_H__

#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

class BST
{
private:
    node *root;
    void insert(int, node *);
    void destroy_tree(node *);
    void inorder(node *);

    node *search(int, node *);

public:
    BST();
    ~BST();

    void insert(int);
    void destroy_tree();
    void inorder();

    node *search(int);
    bool find(int);
};

#endif // __BST_H__