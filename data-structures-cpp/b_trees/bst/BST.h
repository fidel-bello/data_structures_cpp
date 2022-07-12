//
// Created by fidel on 7/12/2022.
//

#ifndef DATA_STRUCTURES_CPP_BST_H
#define DATA_STRUCTURES_CPP_BST_H
#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#include <stack>
#include <algorithm>

class BST {
private:
    int data{ };
    BST* left{ };
    BST* right{ };
public:
    explicit BST(int data, BST* left = nullptr, BST* right = nullptr);
    void in_order(std::vector<int> &values);
    void insert(int val);
    void level_order();
};


#endif //DATA_STRUCTURES_CPP_BST_H
