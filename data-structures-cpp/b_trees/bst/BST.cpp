#pragma clang diagnostic push
#pragma ide diagnostic ignored "LocalValueEscapesScope"
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
//
// Created by fidel on 7/12/2022.
//

#include "BST.h"

BST::BST(int data, BST *left, BST *right): data(data), left(left), right(right) {
}

void BST::in_order(std::vector<int> &values) {
    if(left)
        left->in_order(values);
    values.push_back(data);
    if(right)
        right->in_order(values);
}

void BST::insert(int val) {
    if(val < data){
        if(!left){
            left = new BST(val);
        } else
            left->insert(val);
    } else if (val > data){
        if(!right)
            right = new BST(val);
        else
            right->insert(val);
    }
}

void BST::level_order() {
    std::queue<BST*> nodes_queue;
    nodes_queue.push(this);
    int level = 0;
    while(!nodes_queue.empty()){
        int sz = nodes_queue.size();
        std::cout<< "Level " << level << ": ";
        while (sz --){
            BST* cur = nodes_queue.front();
            nodes_queue.pop();
            std::cout << cur->data<<" ";
            if(cur->left)
                nodes_queue.push(cur->left);
            if(cur->right)
                nodes_queue.push(cur->right);
        }
        level++;
        std::cout << "\n";
    }

}

#pragma clang diagnostic pop
#pragma clang diagnostic pop