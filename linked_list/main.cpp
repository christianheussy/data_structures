#include "linked_list.h"

int main(){
    linked_list my_list = linked_list();
    my_list.append(4);
    my_list.append(3);
    my_list.append(2);
    my_list.append(1);
    my_list.insert_node(2, 5);
	my_list.traverse_nodes();
    return 1;
}