//
// Created by fidel on 7/10/2022.
//

#ifndef DATA_STRUCTURES_CPP_B_TREE_H
#define DATA_STRUCTURES_CPP_B_TREE_H
#include <iostream>
#include <cassert>
#include <vector>

class b_tree {
private:
    struct Node {
        int data { };
        Node* left { };
        Node* right{ };
        explicit Node(int data);
    };
    Node* root{ };
    void printIn_order(Node* head);
public:
    explicit b_tree(int val);
    void printIn_order();
    void add(std::vector<int> val, std::vector<char> direction);
};


#endif //DATA_STRUCTURES_CPP_B_TREE_H
