//
// Created by fidel on 7/10/2022.
//

#include "b_tree.h"

b_tree::Node::Node(int data)
    : data(data){
}

void b_tree::printIn_order(Node* head) { // NOLINT(misc-no-recursion)
    if(!head)
        return;
    printIn_order(head->left);
    std::cout << head->data<< " ";
    printIn_order(head->right);
}

b_tree::b_tree(int val): root(new Node(val)) {
}

void b_tree::printIn_order() {
    printIn_order(root);
}

void b_tree::add(std::vector<int> val, std::vector<char> direction) {
    assert(val.size() == direction.size());
    Node* current = this->root;
    // iterate on the path, create all necessary nodes
    for (int i = 0; i < (int) val.size(); ++i) {
        if (direction[i] == 'L') {
            if (!current->left)
                current->left = new Node(val[i]);
            else
                assert(current->left->data == val[i]);
            current = current->left;
        } else {
            if (!current->right)
                current->right = new Node(val[i]);
            else
                assert(current->right->data == val[i]);
            current = current->right;
        }
    }
}


