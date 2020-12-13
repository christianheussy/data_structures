struct node{
    int data;
    node* left = nullptr;
    node* right = nullptr;
    node(int val){
        data = val;
    }
};

class binary_tree
{
public:
    node* head = nullptr;
    binary_tree(int val);
    void insert(int val);
    void print_tree();
};