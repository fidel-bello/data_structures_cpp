#include "../Stack_2.h"

void list_based_stack(){
    Stack_2 stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.pop();
    stk.display();
    std::cout << stk.peek() << "\n";
}