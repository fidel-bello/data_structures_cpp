#include "vector/methods/vector_methods.cpp"
#include "linked_list/methods/list_methods.cpp"
#include "stacks/array-based/methods/stack_methods.cpp"
#include "stacks/list-based/list_methods/list_method.cpp"
#include "b_trees/traversal/b_tree.cpp"
#include "b_trees/creation/method.cpp"


int main()
{
    std::cout << "\n<===========Binary Trees===========>\n";
    //creating nodes
    Node* plus = new Node('+');
    Node* node2 = new Node('2');
    Node* node3 = new Node('3');
    //link
    plus->left = node2;
    plus->right = node3;
    Node* multiply = new Node('*');
    Node* node4 = new Node('4');
    multiply->left = plus;
    multiply->right = node4;
/*
    post_order(multiply);
    std::cout << "\n";
    post_order2(multiply);
    std::cout << "\n";
    in_order(multiply);
    std::cout << "\n";
    in_order2(multiply);
    std::cout << "\n";
    pre_order(multiply);
*/
    inorder_add();
    return 0;
}
