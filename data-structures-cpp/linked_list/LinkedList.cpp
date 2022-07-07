//
// Created by fidel on 7/6/2022.
//
#include "LinkedList.h"

void LinkedList::insert_end(int val) {
    Node* new_node = new Node(val);
    if(!head)
        head = tail = new_node;
    else {
        tail->next = new_node;
        tail = new_node;
    }
}

void LinkedList::insert_front(int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void LinkedList::print() {
    for(Node* cur = head; cur; cur = cur->next)
        std::cout << cur->data << " ";
    std::cout << "\n";
}

LinkedList::~LinkedList() {
    while(head){
        Node* current = head->next;
        delete head;
        head = current;
    }
}

void LinkedList::delete_front() {
    if(head == nullptr)
        return;
    head = head->next;
}

void LinkedList::delete_end() {
    for(Node* cur = head->next->next; cur; cur = cur->next)
        cur->next = nullptr;
}
