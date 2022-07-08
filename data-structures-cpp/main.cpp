#include "vector/methods/vector_methods.cpp"
#include "linked_list/methods/list_methods.cpp"
#include "stacks/array-based/methods/stack_methods.cpp"
#include "stacks/list-based/list_methods/list_method.cpp"

int main()
{
    v_methods(); //the capacity should be expanded to 4 and the result will be 1 2
    list_methods(); //the result should be 3 4 5
    stack_methods(); // the result = 5 3 1  && 5
    list_based_stack();
    return 0;
}
