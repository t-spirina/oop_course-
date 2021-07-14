#ifndef RGBA_H
#define RGBA_H
#include <cstdint>
#include <iostream>
#include <stdlib.h>
/*
   Написать класс с именем RGBA, который содержит 4 переменные-члена типа std::uint8_t:
   m_red, m_green, m_blue и m_alpha
   (#include cstdint для доступа к этому типу).
   Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha.
   Создать конструктор со списком инициализации членов, который позволит пользователю передавать значения
   для m_red, m_blue, m_green и m_alpha.
    Написать функцию print(), которая будет выводить значения переменных-членов.
*/
class rgba
{
public:
    rgba(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha )
        :m_red(red),
          m_green(green),
          m_blue(blue),
          m_alpha(alpha)
    {};
    void print();
private:
    std::uint8_t m_red = 0;
    std::uint8_t m_green = 0;
    std::uint8_t m_blue = 0;
    std::uint8_t m_alpha = 255;
};

#endif // RGBA_H
