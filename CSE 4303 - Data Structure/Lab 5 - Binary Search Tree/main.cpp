#include<iostream>
#include"BinarySearchTree.h"
using namespace std;

int main () {
    BinarySearchTree<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);
    cout << "Size of the tree: " << tree.size() << endl;
    cout << "Height of the tree: " << tree.height() << endl;
    cout << "Root value of the tree: " << tree.rootValue() << endl;
    cout << "Is the tree empty? " << (tree.empty() ? "Yes" : "No") << endl;
    cout << "Front value of the tree: " << tree.front() << endl;
    cout << "Back value of the tree: " << tree.back() << endl;
    tree.inorder_traversal(tree.root());
    return 0;
}