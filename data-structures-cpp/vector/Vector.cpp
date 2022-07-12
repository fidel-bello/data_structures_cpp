#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-misleading-indentation"
//
// Created by me on 7/6/2022.
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
    assert(0 <= idx && idx < size);
    arr[idx] = val;
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

int Vector::pop(int idx) {
    assert(0 <= idx && idx < size);
    int val = arr[idx];
    for(int p = idx + 1; p < size; ++p)
        arr[p -1] = arr[p];
    --size;
    return val;
}

void Vector::pop_back() {
     arr[size --];
}


int Vector::linear_search(int target) {
    for(int i = 0; i < size; ++i)
        if(arr[i] == target)
            return i;
        return -1;
}

int Vector::binary_search(int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right){
        int middle = (left + right) / 2;
        if(target == arr[middle])
            return middle;
        else if(target > arr[middle])
            left = middle + 1;
        else if(target < arr[middle])
            right = middle - 1;
    }
    return -1;
}


#pragma clang diagnostic pop