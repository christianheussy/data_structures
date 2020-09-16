#include "linked_list.h"

node::node(int val){
    data = val;
}

node::~node(){}

linked_list::linked_list(){}

linked_list::~linked_list(){}

void linked_list::append(int val){

	node* new_node = new node(val);

	// if list is empy make head the new node
    if(head == nullptr){
		head = new_node;
    }
	// find the last node
    else{
		node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
		temp->next = new_node;
    }
}

void linked_list::prepend(int val) {
	node* new_node = new node(val);
	new_node->next = head;
	head = new_node;
}

void linked_list::traverse_nodes(){
	node* temp = head;
    while (temp->next != nullptr)
    {
        std::cout << "Node w/ val: " << temp->data << std::endl;
        temp = temp->next;
    }
	std::cout << "Node w/ val: " << temp->data << std::endl;
}