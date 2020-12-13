#include "binary_tree.h"
#include <iostream>
#include <deque>

binary_tree::binary_tree(int val){
    head = new node(val);
}

void binary_tree::insert(int val){
    // Create node to add to tree
    node* new_node = new node(val);
    node* temp = head;

    // Iterate through tree
    while(temp != nullptr){
        if(val < temp->data){
            temp = temp->left;
        }
        else if(val > temp->data){
            temp = temp->right;
        }
    }
    temp = new_node;
}

void binary_tree::print_tree(){
    int space = 10;

    std::deque<node*> my_s;
    my_s.push_back(head);

    while(my_s.empty() != true){
        std::cout << my_s.front()->data << std::endl;
        if(my_s.front()->left != nullptr) my_s.push_back(my_s.front()->left);
        if(my_s.front()->right != nullptr) my_s.push_back(my_s.front()->right);
        my_s.pop_front();
    }
}