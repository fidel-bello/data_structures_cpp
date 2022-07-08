#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
#include <iostream>

struct Node {
    char data{ };
    Node* left{ };
    Node* right{ };
    explicit Node(char data) : data(data){};
};

void post_order(Node* cur) {
    if(!cur)
        return;
    post_order(cur->left);
    post_order(cur->right);
    std::cout << cur->data << " ";
}


#pragma clang diagnostic pop