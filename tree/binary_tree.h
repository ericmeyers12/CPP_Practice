
struct Node{
  Node * left;
  Node * right;
  int data;
};

class binary_tree
{
    public:
        binary_tree();
        ~binary_tree();

        void insert(int key);
        Node * search(int key);
        void destroy_tree();
        Node * get_root();

        void preorder_traversal(Node * leaf);
        void inorder_traversal(Node * leaf);
        void postorder_traversal(Node * leaf);


    private:
        void destroy_tree(Node *leaf);
        void insert(int key, Node *leaf);
        Node *search(int key, Node *leaf);

        Node *root;
};
