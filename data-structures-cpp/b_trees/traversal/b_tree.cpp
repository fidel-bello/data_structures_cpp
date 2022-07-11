#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
#include <iostream>

struct Node {
    char data{ };
    Node* left{ };
    Node* right{ };
    explicit Node(char data) : data(data){};
};

/*
* post order traversal prints outs tree node from left to right to root
* example--> Node* plus = root, Node* node2 is left and node3 is right. output is 2 3 +
*/

void post_order(Node* root) {
    // recursive solution
    if(!root)
        return;
    post_order(root->left);
    post_order(root->right);
    std::cout << root->data << " ";
}

void post_order2(Node* root){
    if(!root)
        return;
    std::cout << root->left->left->data<< " ";
    std::cout << root->left->right->data<< " ";
    std::cout << root->left->data<< " ";
    std::cout << root->right->data<< " ";
    std::cout << root->data << "\n";
}

void in_order(Node* root){
    if(!root)
        return;
    in_order(root->left);
    std::cout << root->data << " ";
    in_order(root->right);
}

void in_order2(Node* root){
    if(!root)
        return;
    std::cout << root->left->left->data << " ";
    std::cout << root->left->data<< " ";
    std::cout << root->left->right->data<< " ";
    std::cout << root->data << " ";
    std::cout << root->right->data << " ";
}

void pre_order(Node* root){
    if(!root)
        return;
    std::cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

#pragma clang diagnostic pop