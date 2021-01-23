#include <iostream>
#include "./include/BST/bst.h"

using namespace std;

int main(){
    BST root;`
    root.insert(10);
    root.insert(5);
    root.insert(15);
    root.insert(3);
    root.insert(20);
    root.inorder();

    cout<<root.find(5)<<endl;
    cout<<root.find(12)<<endl;

    return 0;
}