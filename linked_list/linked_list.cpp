#include "linked_list.h"

node::node(int val){
    data = val;
}

node::~node(){}

linked_list::linked_list(){}

linked_list::~linked_list(){}

void linked_list::append(int val){

	node* new_node = create_node(val);

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

node* linked_list::create_node(int val){
    length++;
    return new node(val);
}

void linked_list::insert_node(int pos, int val){

    node* new_node = create_node(val);
    node* temp = head;
    if (pos == 0){
        prepend(val);
    }
    else{
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        // break link and insert
        node* next_node = temp->next;
        new_node->next = next_node;
        temp->next = new_node;
    }
}

void linked_list::prepend(int val) {
	node* new_node = create_node(val);
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