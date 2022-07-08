#include "vector/methods/vector_methods.cpp"
#include "linked_list/methods/list_methods.cpp"
#include "stacks/array-based/methods/stack_methods.cpp"
#include "stacks/list-based/list_methods/list_method.cpp"

struct B_Node {
    int data{ };
    B_Node* left{ };
    B_Node* right{ };
    explicit B_Node(int data): data(data){};
};

int main()
{
    /*
    v_methods(); //the capacity should be expanded to 4 and the result will be 1 2
    list_methods(); //the result should be 3 4 5
    stack_methods(); // the result = 5 3 1  && 5
    list_based_stack(); // result = 2 1 && 2
     */
    std::cout << "\n<===========Binary Trees===========>\n";
    //creating nodes
    auto* root = new B_Node(1);
    auto* node2 = new B_Node(2);
    auto* node3 = new B_Node(3);
    auto* node4 = new B_Node(4);
    auto* node5 = new B_Node(5);
    auto* node6 = new B_Node(6);
    auto* node7 = new B_Node(7);
    auto* node8 = new B_Node(8);

    //link
    root->left = node2;
    root->right = node3;

    node2->left = node4;
    node2->right = node5;

    node5->right = node7;

    node3->right = node6;
    node6->left = node8;

    std::cout << root->left->right->right->data << "\n"; //7
    std::cout << node2->right->right->data <<"\n"; //7
    std::cout << node5->right->data << "\n"; // 7
    std::cout << node7->data << "\n"; //7;
    std::cout << root->right->right->data << "\n"; //6
    std::cout << root->right->right->left->data<< "\n"; //8
    return 0;
}
