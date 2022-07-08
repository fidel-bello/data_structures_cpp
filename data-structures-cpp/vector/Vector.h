//
// Created by fidel on 7/6/2022.
//

#ifndef DATA_STRUCTURES_CPP_VECTOR_H
#define DATA_STRUCTURES_CPP_VECTOR_H
#include <iostream>
#include <cassert>
class Vector {
private:
    int *arr { nullptr };
    int size { 0 }; // user size
    int capacity { }; // actual size
    void expand_capacity();
public:
    explicit Vector(int size);
    ~Vector();
    void set(int idx, int val);
    void print();
    void push(int val);
    void pop_back();
    int pop(int idx);
    int search(int idx);
};

#endif //DATA_STRUCTURES_CPP_VECTOR_H
