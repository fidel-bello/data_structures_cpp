#include "Vector.h"

void v_methods() {
    int n = 2;
    Vector v(n);
    for(int i = 0; i < n; ++i)
        v.set(i, i);
    v.push(2);
    v.print();
};