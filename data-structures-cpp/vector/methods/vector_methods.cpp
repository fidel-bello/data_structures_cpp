#include "../Vector.h"
void v_methods() {
    std::cout << "<===========VECTOR===========>\n\n";
    int n = 2;
    Vector v(n);
    for(int i = 0; i < n; ++i)
        v.set(i, i);
    v.push(2);
    v.push(3);
    v.push(6);
    v.pop(0);
    v.pop_back();
    v.print();
    std::cout << v.linear_search(3) << "\n";
    std::cout << v.binary_search(3) << "\n";
    std::cout <<"\n\n<===========Linked List===========> \n\n";
};