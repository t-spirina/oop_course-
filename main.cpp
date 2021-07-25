#include <iostream>

#include "arrayint.h"
#include <vector>
#include <set>
#include "hand.h"
int main()
{
    ArrayInt a(0);
    a.push_back(6); a.push_back(2); a.push_back(9); a.push_back(0);

    std::cout<<"before sort "<<std::endl;
    a.print();
    std::cout<<"after sort "<<std::endl;
    a.sort();
    a.print();

    std::cout<<"последним был "<<a.pop_back()<<std::endl;
    a.print();

    std::cout<<"первым был "<<a.pop_front()<<std::endl;
    a.print();

/*    Дан вектор чисел, требуется выяснить, сколько среди них различных. Постараться использовать максимально быстрый алгоритм.*/
    std::vector<int> vec{1,2,3,4,2,3,1,5};
    vec.shrink_to_fit();
    std::sort(vec.begin(),vec.end());

    int count=0;
    for (auto i=0;i<vec.size();i++)
    {
        if (vec[i]!=vec[i+1]) count++;
    }
    std::cout<<"1. в векторе "<<count<<" уникальных элементов"<<std::endl;

    std::set<int> st{vec.begin(), vec.end()};
    std::cout<<"2. в векторе "<<st.size()<<" уникальных элементов"<<std::endl;

    Hand h;
    Card c1(heart,ace);
    Card c3(diamond,queen);
    h.Add(&c1);
    h.Add(&c3);
    std::cout<<"hand "<<h.GetValue()<<std::endl;
    return 0;
}
