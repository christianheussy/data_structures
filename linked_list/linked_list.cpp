#include "linked_list.h"

node::node(int val){
    data = val;
}

node::~node(){}

linked_list::linked_list(){}

linked_list::~linked_list(){}

void linked_list::append(int val){
    if(head == nullptr){
        head = new node(val);
    }
    else{
        while(head->next != nullptr){
            head = head->next;
        }
        head->next = new node(val);
    }
}

void linked_list::traverse_nodes(){
    while (head->next != nullptr)
    {
        std::cout << "Node w/ val: " << head->data << std::endl;
        head = head->next;
    }
}