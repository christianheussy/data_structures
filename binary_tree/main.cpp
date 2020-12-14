#include "binary_tree.h"
#include <iostream>

int main()
{
    binary_tree my_tree = binary_tree(5);
    my_tree.insert(3, my_tree.head);
    my_tree.insert(2, my_tree.head);
    my_tree.insert(4, my_tree.head);
    my_tree.insert(10, my_tree.head);
    my_tree.insert(9, my_tree.head);
    my_tree.insert(11, my_tree.head);
	my_tree.print_tree();
    
    return 0;
}
