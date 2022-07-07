//
// Created by fidel on 7/7/2022.
// Array based stack
//

#ifndef DATA_STRUCTURES_CPP_STACK_H
#define DATA_STRUCTURES_CPP_STACK_H
#include <iostream>
#include <cassert>
class Stack {
private:
    int size{ };
    int top { };
    int* array { };
public:
    explicit Stack(int size);
    ~Stack();
    [[nodiscard]] int isFull() const;
    [[nodiscard]] int isEmpty() const;
    void display();
    void push(int val);
    int pop();
    int peek();
};


#endif //DATA_STRUCTURES_CPP_STACK_H
