#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <numeric>
#include <algorithm>
/*
Создать класс: Fraction (дробь). Дробь имеет числитель и знаменатель (например, 3/7 или 9/2). Предусмотреть, чтобы знаменатель не был равен 0. Перегрузить:
математические бинарные операторы (+, -, *, /) для выполнения действий с дробями
унарный оператор (-)
логические операторы сравнения двух дробей (==, !=, <, >, <=, >=).
Примечание: Поскольку операторы < и >=, > и <= — это логические противоположности, попробуйте перегрузить один через другой.
Продемонстрировать использование перегруженных операторов.
*/

class fraction
{
public:
    fraction( int16_t numerator, int16_t denominator=1):
        m_up(numerator),
        m_down(denominator)
    {
        while(m_down==0)
        {
            std::cout<<"denominator cant be zero, please enter denominator:"<< std::endl;
            std::cin>>m_down;
        }

    }
    void print(){std::cout<<m_up<<"/"<<m_down<< std::endl;}

    friend fraction operator+ (const fraction &f1, const fraction &f2);
    friend fraction operator- (const fraction &f1, const fraction &f2);
    friend fraction operator* (const fraction &f1, const fraction &f2);
    friend fraction operator/ (const fraction &f1, const fraction &f2);
    fraction operator- ()const
    {
        return fraction(-m_up,m_down);
    }

    friend bool operator ==(const fraction &f1, const fraction &f2);
    friend bool operator !=(const fraction &f1, const fraction &f2);
    friend bool operator > (const fraction &f1, const fraction &f2);
    friend bool operator >= (const fraction &f1, const fraction &f2);
    friend bool operator < (const fraction &f1, const fraction &f2);
    friend bool operator <= (const fraction &f1, const fraction &f2);



protected:
    int16_t m_up; //числитель
    int16_t m_down; //знаменатель
    fraction simplify()
    {
        int16_t del=std::__gcd(m_up,m_down);
        if(del>0){
            m_up=m_up/del;
            m_down=m_down/del;
        }
        return fraction(m_up,m_down);
    }
};

fraction operator+ (const fraction &d1, const fraction &d2)
{
    fraction res(0,1);
    if(d1.m_down!=d2.m_down)
    {
        res.m_down=d1.m_down*d2.m_down;
        res.m_up=d1.m_up*d2.m_down+d2.m_up*d1.m_down;
    }
    else
    {
        res.m_down=d1.m_down;
        res.m_up=d1.m_up+d2.m_up;
    }
    return res.simplify();
}
fraction operator- (const fraction &d1, const fraction &d2)
{
    fraction res(0,1);
    if(d1.m_down!=d2.m_down)
    {
        res.m_down=d1.m_down*d2.m_down;
        res.m_up=d1.m_up*d2.m_down-d2.m_up*d1.m_down;
    }
    else
    {
        res.m_down=d1.m_down;
        res.m_up=d1.m_up-d2.m_up;
    }
    return res.simplify();
}
fraction operator* (const fraction &d1, const fraction &d2)
{
    fraction res(0,1);
    res.m_down=d1.m_down*d2.m_down;
    res.m_up=d1.m_up*d2.m_up;

    return res.simplify();
}

fraction operator/ (const fraction &d1, const fraction &d2)
{
    fraction res(0,1);
    res.m_up=d1.m_up*d2.m_down;
    res.m_down=d1.m_down*d2.m_up;
    return res.simplify();
}
 bool operator ==(const fraction &f1, const fraction &f2)
{

    return (((f1.m_down*1.0)/f2.m_down)==((f1.m_up*1.0)/f2.m_up));
}
 bool operator !=(const fraction &f1, const fraction &f2)
 {
     return !(f1==f2);
 }

 bool operator > (const fraction &f1, const fraction &f2)
 {
    if (f2.m_down!=f1.m_down)
    {
        return(f2.m_up*f1.m_down>f1.m_up*f2.m_down);
    }
    return(f1.m_up>f2.m_up);
 }
 bool operator <= (const fraction &f1, const fraction &f2)
 {
     return !(f1>f2);
 }
 bool operator < (const fraction &f1, const fraction &f2)
 {
     if (f2.m_down!=f1.m_down)
     {
         return(f2.m_up*f1.m_down<f1.m_up*f2.m_down);
     }
     return(f1.m_up<f2.m_up);

 }
 bool operator >= (const fraction &f1, const fraction &f2)
 {
     return !(f1<f2);
 }

#endif // FRACTION_H
