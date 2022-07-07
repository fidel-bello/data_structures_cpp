//
// Created by fidel on 7/7/2022.
//
#include "../Stack.h"

void stack_methods(){
    std::cout << "\n\n<===========Stacks===========>\n\n";
    Stack stk(5);
    stk.push(1);
    stk.push(2);
    stk.pop();
    stk.push(3);
    stk.push(5);
    stk.display();
    std::cout << stk.peek() << "\n";
}