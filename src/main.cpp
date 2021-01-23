#include <iostream>
#include "./include/BST/bst.h"
#include "./include/LinkedList/linkedList.h"

using namespace std;

int main(){
    BST root;
    root.insert(10);
    root.insert(5);
    root.insert(15);
    root.insert(3);
    root.insert(20);
    root.inorder();
    cout<<root.find(5)<<endl;
    cout<<root.find(12)<<endl;

    LinkedList head;
    head.insert(10);
    head.insert(1);
    head.print();
    head.insert(21);
    head.print();
    cout<<head.find(21)<<endl;
    cout<<head.find(1)<<endl;

    return 0;
}