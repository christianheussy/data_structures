#include <iostream>

// #define NULL 0

class node
{
public:
    int data;
    node* next = nullptr;
    node(int val);
    ~node();
};

class linked_list
{
public:
    node* head = nullptr;
    linked_list();
    ~linked_list();
    void append(int value);
	void prepend(int value);
    void traverse_nodes();
};


