#include "bst.h"

BST::BST()
{
    root = nullptr;
}

BST::~BST()
{
    destroy_tree();
}

void BST::destroy_tree()
{
    destroy_tree(root);
}
void BST::destroy_tree(node *leaf)
{
    if (leaf != nullptr)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void BST::insert(ull key)
{
    if (root != nullptr)
        insert(key, root);
    else
    {
        root = new node;
        root->data = key;
        root->left = nullptr;
        root->right = nullptr;
    }
}
void BST::insert(ull key, node *leaf)
{
    if (key < leaf->data)
    {
        if (leaf->left != nullptr)
            insert(key, leaf->left);
        else
        {
            leaf->left = new node;
            leaf->left->data = key;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
    }
    else
    {
        if (leaf->right != nullptr)
            insert(key, leaf->right);
        else
        {
            leaf->right = new node;
            leaf->right->data = key;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
    }
}

node *BST::search(ull key)
{
    return search(key, root);
}
node *BST::search(ull key, node *leaf)
{
    if (leaf != nullptr)
    {
        if (key == leaf->data)
            return leaf;
        if (key < leaf->data)
            return search(key, leaf->left);
        else
            return search(key, leaf->right);
    }
    else
        return NULL;
}

void BST::inorder()
{
    if(root != nullptr)
        inorder(root);
    cout<<endl;
}
void BST::inorder(node *leaf)
{
    if(leaf == NULL)
        return;

    inorder(leaf->left);
    cout<<leaf->data<<"\t";
    inorder(leaf->right);
}

bool BST::find(ull key) 
{
    if(search(key) != nullptr) return true;
    return false;
}

void BST::set(vector<ull> &tab)  
{
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < tab.size(); i++)
        this->insert(tab[i]);
    auto end = chrono::steady_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}