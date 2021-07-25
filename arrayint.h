#ifndef ARRAYINT_H
#define ARRAYINT_H
#include <cassert> // для assert()
#include <iostream>
#include <algorithm>
/*
Добавить в контейнерный класс, который был написан в этом уроке, методы:
- для удаления последнего элемента массива (аналог функции pop_back() в векторах)
- для удаления первого элемента массива (аналог pop_front() в векторах)
- для сортировки массива
- для вывода на экран элементов.
*/
class ArrayInt
{
private:
    int m_length;
    int *m_data;

public:
   /* ArrayInt(): m_length(0), m_data(nullptr)
    { }
*/
    ArrayInt(int length):
    m_length(length)
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }
    void erase();
    int getLength() { return m_length; }
    int& operator[](int index)
       {
           assert(index >= 0 && index < m_length);
           return m_data[index];
       }
    void resize(int newLength);
    void insertBefore(int value, int index);
    void push_back(int value) { insertBefore(value, m_length); }
    int pop_back()
    {
       int ret =m_data[m_length-1];
        m_length--;
        resize(m_length);
        return ret;
    }
    int pop_front()
    {
        try {
            if (m_length==0)
                throw ("empty array");
            int ret=m_data[0];

            if (m_length-1 <= 0)
            {
                erase();
                return ret;
            }
            m_length--;
            int *data = new int[m_length];
            if (m_length > 0)
            {
                    for (int index=0; index < m_length ; ++index)
                    data[index] = m_data[index+1];
            }
            delete[] m_data;
            m_data = data;

            return ret;
        } catch (const char* str)
        {
        std::cout<<"err!: "<<str<<std::endl;
        return -1;
        }
    }
    void sort()
    {std::sort(m_data, m_data+m_length);}
    void print()
    {
        std::cout<<"array: ";
        for (int i=0;i<m_length;i++)
            std::cout<<m_data[i]<<" ";
        std::cout<<std::endl;
    }

    ~ArrayInt()
    {
        delete[] m_data;
    }
};

#endif
