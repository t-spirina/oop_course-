#ifndef PAIR1_H
#define PAIR1_H
/*
Реализовать шаблон класса Pair1, который позволяет пользователю передавать данные одного типа парами.
*/
template <class T>
class pair1
{
private:
    T m_first;
    T m_second;

public:
    pair1(T first, T second)
    {
       m_first = first;
       m_second = second;
    }

    T first() const
    {
        return m_first;
    }
    T second() const
    {
        return m_second;
    }

};

#endif // PAIR1_H
