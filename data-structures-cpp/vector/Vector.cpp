//
// Created by fidel on 7/6/2022.
//

#include "Vector.h"

void Vector::expand_capacity() {
    capacity *= 2; // double capacity
    std::cout <<"capacity expanded to " << capacity << "\n";
    int *arr2 = new int [capacity] { };
    for (int i = 0; i < size; i++) arr2[i] = arr[i];
    std::swap(arr, arr2);
    delete[] arr2;
}

Vector::Vector(int size) : size(size) {
    if(size < 0) size = 1;
    capacity = size;
    arr = new int [capacity] { };
}

Vector::~Vector() {
    delete [] arr;
    arr = nullptr;
}

void Vector::set(int idx, int val) {
    if (0 <= idx && idx < size) arr[idx] = val;
}

void Vector::push(int val) {
    if(size == capacity) expand_capacity();
    arr[size++] = val;
}

void Vector::print() {
    for(int i = 0; i < size; ++i)
        std::cout<< arr[i] << " ";
    std::cout << "\n";
}

