#pragma clang diagnostic push
#pragma ide diagnostic ignored "ConstantFunctionResult"
#pragma ide diagnostic ignored "ConstantConditionsOC"
#pragma ide diagnostic ignored "UnreachableCode"
#pragma ide diagnostic ignored "misc-no-recursion"
//
// Created by fidel on 7/10/2022.
//

#include "b_tree.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "NullDereference"
b_tree::b_tree(int val): data(val) {
}

void b_tree::add(const std::vector<int>& val, const std::vector<char>& direction) {
    assert(val.size() == direction.size());
    b_tree* current = this;
    for(int i = 0; i < val.size(); ++i){
        if(direction[i] == 'L'){
            if(!current->left)
                current->left = new b_tree(val[i]);
            else
                assert(current->left->data == val[i]);
            current = current->left;
        } else {
            if(!current->right)
                current->right = new b_tree(val[i]);
            else
                assert(current->right->data == val[i]);
            current = current->right;
        }
    }
}

void b_tree::printIn_order() {
    if(left)
        left->printIn_order();
    std::cout << data << " ";
    if(right)
        right->printIn_order();
}

int b_tree::tree_max() {
    int res = data;
    if(left)
        res = std::max(res, left->tree_max());
    if(right)
        res = std::max(res, right->tree_max());
    return res;
}

int b_tree::tree_height(){
    int res = 0;
    if(left)
        res = 1 + left->tree_height();
    if(right)
        res = std::max(res, 1 + right->tree_height());
    return res;
}

int b_tree::total_nodes(){
    int res = 1;
    if(left)
        res += left->total_nodes();
    if(right)
        res += right->total_nodes();
    return res;
}

int b_tree::leafs_count() {
    int res = !left && !right;
    if(left)
        res+= left->leafs_count();
    if(right)
        res+= right->leafs_count();
    return res;
}

bool b_tree::does_exist(int val) {
    bool res = val == data;
    if(!res && left)
        res = left->does_exist(val);
    if(!res && right)
        res = right->does_exist(val);
    return res;
}

#pragma clang diagnostic pop
#pragma clang diagnostic pop

