#include "binary_tree.h"
#include <iostream>
#include <deque>

binary_tree::binary_tree(int val){
    head = new node(val);
}

node* binary_tree::create_node(int val){
	return new node(val);
}

void binary_tree::insert(int val, node* head_ptr){
	if(val < head_ptr->data){
		if(head_ptr->left == nullptr){
			head_ptr->left = create_node(val);
		}
		else{
			binary_tree::insert(val, head_ptr->left);
		}
	}
	else if(val > head_ptr->data){
		if(head_ptr->right == nullptr){
			head_ptr->right = create_node(val);
		}
		else{
			binary_tree::insert(val, head_ptr->right);
		}
	}
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