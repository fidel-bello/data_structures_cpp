//
// Created by fidel on 7/10/2022.
//

#ifndef DATA_STRUCTURES_CPP_B_TREE_H
#define DATA_STRUCTURES_CPP_B_TREE_H
#include <iostream>
#include <cassert>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>

class b_tree {
private:
        int data { };
        b_tree* left { };
        b_tree* right{ };
public:
    explicit b_tree(int val);
    void printIn_order();
    void add(const std::vector<int>& val, const std::vector<char>& direction);
    int tree_max();
};


#endif //DATA_STRUCTURES_CPP_B_TREE_H
