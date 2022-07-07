/*
 * Created by fidel on 7/6/2022.
*/

#ifndef DATA_STRUCTURES_CPP_LINKEDLIST_H
#define DATA_STRUCTURES_CPP_LINKEDLIST_H
#include <iostream>
#include <cassert>
class LinkedList {
private:
    struct Node{
        int data { };
        Node* next { };
        explicit Node(int data)
        : data(data) { };
    };
    Node* head { };
    Node* tail  { };
public:
    LinkedList()= default;
    LinkedList(const LinkedList&) = delete;
    LinkedList &operator = (const LinkedList &another ) = delete;
    ~LinkedList();
    void insert_end(int val);
    void insert_front(int val);
    void delete_front();
    void delete_end();
    void print();
};


#endif //DATA_STRUCTURES_CPP_LINKEDLIST_H
