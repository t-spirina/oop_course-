#include <iostream>
#include "power.h"
#include "rgba.h"
#include "stack.h"

int main()
{
    power p;
    rgba rgba(10,10,10,155);
    stack stack;
    p.set(2,4);
    std::cout << "2^4=" <<p.calculate()<<std::endl;
    rgba.print();


    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
