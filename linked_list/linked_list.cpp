#include "linked_list.h"

node::node(int val){
    data = val;
}

node::~node(){}

linked_list::linked_list(){}

linked_list::~linked_list(){}

void linked_list::append(int val){
	node* new_node = new node(val);
	// If list is empty make head the new node
    if(head == nullptr){
		head = new_node;
    }
	// Find the last node
    else{
		node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
		temp->next = new_node;
    }
}

void linked_list::print_list(){
    // Traverse the list and print the value of each node
	node* temp = head;
    while (temp->next != nullptr){
        std::cout << "Node w/ val: " << temp->data << std::endl;
        temp = temp->next;
    }
	std::cout << "Node w/ val: " << temp->data << std::endl;
}

void linked_list::insert_node(int pos, int val){
    // Implement the insert node method
}