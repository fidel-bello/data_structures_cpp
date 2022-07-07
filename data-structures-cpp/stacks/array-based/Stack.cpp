//
// Created by fidel on 7/7/2022.
//

#include "Stack.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "NullDereference"
Stack::Stack(int size): size(size), top(-1) {
    array = new int [size];
}

Stack::~Stack() {
    delete[] array;
}

int Stack::isFull() const {
    return top == size -1;
}

int Stack::isEmpty() const {
    return top == -1;
}

void Stack::push(int val){
    assert(!isFull());
    array[++top] = val;
}

void Stack::display() {
    for(int i = top; i >= 0; i--)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

int Stack::pop() {
    assert(!isEmpty());
    return array[top--];
}

int Stack::peek() {
    return array[top];
}


#pragma clang diagnostic pop