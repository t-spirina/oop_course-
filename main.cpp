#include <iostream>
#include "ex_bar.h"

template <typename T>
double div (T &a, T &b)
{
    if (b==0)
        throw ("DivisionByZero");
    return ((a+0.0)/b);
}

int main()
{
    double a = 3;
    double b = 0;
    try
    {
        double res = div(a,b);
        std::cout << "a/b = " << res<< '\n';
    }
    catch (const char* exception)
    {
         std::cerr << "Error: " << exception << std::endl;
    }
    Bar bar;
    int16_t n;
    try {
        do
        {
            std::cout<<"\nn= ";
            std::cin>>n;

            bar.set(n);

        } while (n!=0);
    } catch (Ex &ex) {
        std::cout<<"Exeption: "<<ex.getEx()<<std::endl;
    }
    return 0;
}
