//
// Created by fidel on 7/7/2022.
//

#include "Stack_2.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
Stack_2::~Stack_2() {
    while (!isEmpty())
        pop();
}

int Stack_2::isEmpty() {
    return !head;
}

int Stack_2::pop() {
    assert(!isEmpty());
    int node = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    return node;
}

void Stack_2::push(int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void Stack_2::display() {
    for(Node* cur = head; cur; cur = cur->next)
        std::cout << cur->data << " ";
    std::cout << "\n";
}

int Stack_2::peek() {
    assert(!isEmpty());
    int node = head->data;
    return node;
}
#pragma clang diagnostic pop