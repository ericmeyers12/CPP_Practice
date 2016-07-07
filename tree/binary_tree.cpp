
#include "binary_tree.h"
#include <iostream>

using namespace std;

/*------------------------------------------------*/
//Constructor
binary_tree::binary_tree() {
  root = NULL;
}

/*------------------------------------------------*/
//Destructor
binary_tree::~binary_tree() {
  destroy_tree();
}

Node * binary_tree::get_root() {
  return root;
}

/*------------------------------------------------*/
//Helper Function for Destructor
void binary_tree::destroy_tree(Node *leaf)
{
  if(leaf!=NULL)
  {
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}

/*------------------------------------------------*/
//Helper Function for Destructor
void binary_tree::destroy_tree()
{
  destroy_tree(root);
}


/*------------------------------------------------*/
void binary_tree::insert(int data, Node *leaf)
{
  if(data < leaf->data)
  {
    if(leaf->left!=NULL)
     insert(data, leaf->left);  //recursive
    else
    {
      leaf->left=new Node;
      leaf->left->data=data;
      leaf->left->left=NULL;    //Sets the left child of the child Node to null
      leaf->left->right=NULL;   //Sets the right child of the child Node to null
    }
  }
  else if(data >= leaf->data)
  {
    if(leaf->right!=NULL)
      insert(data, leaf->right);
    else
    {
      leaf->right=new Node;
      leaf->right->data=data;
      leaf->right->left=NULL;  //Sets the left child of the child Node to null
      leaf->right->right=NULL; //Sets the right child of the child Node to null
    }
  }
}

/*------------------------------------------------*/
void binary_tree::preorder_traversal(Node * leaf){
  if (leaf) {
    cout << leaf->data << " ";
    preorder_traversal(leaf->left);
    preorder_traversal(leaf->right);
  }
}

/*------------------------------------------------*/
void binary_tree::inorder_traversal(Node * leaf){
  if (leaf) {
    inorder_traversal(leaf->left);
    cout << leaf->data << " ";
    inorder_traversal(leaf->right);
  }
}


/*------------------------------------------------*/
void binary_tree::postorder_traversal(Node * leaf){
  if (leaf) {
    postorder_traversal(leaf->left);
    postorder_traversal(leaf->right);
    cout << leaf->data << " ";
  }
}

/*------------------------------------------------*/
Node *binary_tree::search(int data, Node *leaf)
{
  if(leaf!=NULL)
  {
    if(data==leaf->data)
      return leaf;
    if(data<leaf->data)
      return search(data, leaf->left);
    else
      return search(data, leaf->right);
  }
  else return NULL;
}


/*------------------------------------------------*/
Node * binary_tree::search(int data)
{
  return search(data, root);
}


/*------------------------------------------------*/
void binary_tree::insert(int data)
{
  if(root!=NULL)
    insert(data, root);
  else
  {
    root=new Node;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
  }
}
