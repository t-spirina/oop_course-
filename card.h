#ifndef CARD_H
#define CARD_H
#include <iostream>
/*Создать класс Card, описывающий карту в игре БлэкДжек.
У этого класса должно быть три поля:
    масть,
    значение карты и
    положение карты (вверх лицом или рубашкой).
Сделать поля масть и значение карты типом перечисления (enum).
Положение карты - тип bool.
Также в этом классе должно быть два метода:
    метод Flip(), который переворачивает карту, т.е. если она была рубашкой вверх, то он ее поворачивает лицом вверх, и наоборот.
    метод GetValue(), который возвращает значение карты, пока можно считать, что туз = 1.
*/
enum suits
{
    heart, //червы
    diamond, //бубны
    club, //трефы
    spade, //пики
    unknown_s //что-то
};
enum nominals
{
    ace = 1, two, three,four,five,six,seven,eight, nine, ten, jack, queen, king, unknown_n
};

class Card
{
public:

    Card(suits suit=unknown_s, nominals nominal=unknown_n):
    m_suit(suit),
    m_nominal(nominal),
    m_isUp(false)  {}

    uint16_t getValue() const
    {
        int val=0;
        if(m_nominal!=unknown_n)
        {
            val=m_nominal;
            if (val<=10)
                return val;
            else
                return 10;
        }
        return 0;
    }
    void Flip()
        {m_isUp=!(m_isUp);}

protected:
    suits m_suit;
    nominals m_nominal;
    bool m_isUp;

};
#endif // CARD_H
