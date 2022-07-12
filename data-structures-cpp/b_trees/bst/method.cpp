#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
#include "BST.h"

BST* build_balanced_bst(std::vector<int> &values, int start = 0, int end = -10){
    if(end == -10)
        end = (int) values.size() - 1;
    if(start > end)
        return nullptr;
    int middle = (start + end) / 2;
    BST* left = build_balanced_bst(values, start, middle -1);
    BST* right = build_balanced_bst(values, middle + 1, end);
    BST* root = new BST(values[middle], left, right);
    return root;
}

void build_bst(){
    std::vector<int> values = { 0,1,2,3,4,5,6,7,8,9 };
    BST* tree = build_balanced_bst(values);
    values.clear();
    tree->in_order(values);
    tree->level_order();
}

#pragma clang diagnostic pop