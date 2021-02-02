#ifndef __BST_H__
#define __BST_H__
#define ull unsigned long long

#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

struct node
{
    ull data;
    node *left;
    node *right;
};

class BST
{
private:
    node *root;
    void insert(ull, node *);
    void destroy_tree(node *);
    void inorder(node *);

    node *search(ull, node *);

public:
    BST();
    ~BST();
    
    void destroy_tree();

    void insert(ull);
    void set(vector<ull> &);
    
    void inorder();

    node *search(ull);

    bool find(ull);
    void find(vector<ull> &);
};

#endif // __BST_H__