#include "linked_list.h"

int main(){
    linked_list my_list = linked_list();
    int ar[5] = {1, 2, 3, 4, 5};
    for (int elem: ar){
        my_list.append(elem);
    }
    my_list.insert_node(2, 6);
	my_list.print_list();
    return 1;
}