#include <iostream>
#include "pair1.h"
#include "pair2.h"
#include "StringValuePair.h"
int main()
{
    pair1<int> p1(1,3);
    std::cout << "Pair1: " << p1.first() << ' ' << p1.second() << '\n';
    Pair<double, int> p2(3.4, 5);
    std::cout << "Pair2: " << p2.first() << ' ' << p2.second() << '\n';
    const Pair<int, double> p3(6, 7.8);
    std::cout << "Pair3: " << p3.first() << ' ' << p3.second() << '\n';
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    return 0;
}
