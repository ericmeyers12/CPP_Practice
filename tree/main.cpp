
#include <iostream>
#include "binary_tree.h"

using namespace std;

#define VAL1 1
#define VAL2 10
#define VAL3 5
#define VAL4 11
#define VAL5 9

int main(void) {

cout << "Test Print\n";

binary_tree * one = new binary_tree();
one->insert(VAL1);
one->insert(VAL2);
one->insert(VAL3);
one->insert(VAL4);


cout << one->search(VAL1) << ": " << "RIGHT: " << one->search(VAL1)->right << " LEFT: " << one->search(VAL1)->left << " DATA: " << one->search(VAL1)->data << endl;
cout << one->search(VAL2) << ": " << "RIGHT: " << one->search(VAL2)->right << " LEFT: " << one->search(VAL2)->left << " DATA: " << one->search(VAL2)->data << endl;
cout << one->search(VAL3) << ": " << "RIGHT: " << one->search(VAL3)->right << " LEFT: " << one->search(VAL3)->left << " DATA: " << one->search(VAL3)->data << endl;
cout << one->search(VAL4) << ": " << "RIGHT: " << one->search(VAL4)->right << " LEFT: " << one->search(VAL4)->left << " DATA: " << one->search(VAL4)->data << endl;
// cout << one->search(VAL5) << ": " << "RIGHT: " << one->search(VAL5)->right << " LEFT: " << one->search(VAL5)->left << " DATA: " << one->search(VAL5)->data << endl;


one->preorder_traversal(one->get_root());
cout << endl;
one->inorder_traversal(one->get_root());
cout << endl;
one->postorder_traversal(one->get_root());
cout << endl;



}
