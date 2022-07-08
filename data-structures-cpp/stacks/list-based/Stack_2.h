//
// Created by fidel on 7/7/2022.
//

#ifndef DATA_STRUCTURES_CPP_STACK_2_H
#define DATA_STRUCTURES_CPP_STACK_2_H
#include <iostream>
#include <cassert>
class Stack_2 {
private:
    struct Node{
        int data { };
        Node* next { };
        explicit Node(int data): data(data){};
    };
    Node* head { };
public:
    ~Stack_2();
    int isEmpty();
    void display();
    int pop();
    int peek();
    void push(int val);
};


#endif //DATA_STRUCTURES_CPP_STACK_2_H
