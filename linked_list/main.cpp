#include "linked_list.h"

int main(){
    /// Want to create a linked list with values 1, 2, 3

    linked_list my_list = linked_list();
    my_list.append(4);
    my_list.append(3);
    my_list.append(2);
    my_list.append(1);
    my_list.traverse_nodes();
    // head = new node();
    return 1;
}