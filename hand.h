#ifndef HAND_H
#define HAND_H
#include "card.h"
#include <vector>
/*
Реализовать класс Hand, который представляет собой коллекцию карт.
В классе будет одно поле: вектор указателей карт (удобно использовать вектор, т.к. это по сути динамический массив, а тип его элементов должен быть - указатель на объекты класса Card). Также в классе Hand должно быть 3 метода:
метод Add, который добавляет в коллекцию карт новую карту, соответственно он принимает в качестве параметра указатель на новую карту
метод Clear, который очищает руку от карт
метод GetValue, который возвращает сумму очков карт руки (здесь предусмотреть возможность того, что туз может быть равен 11).

*/
class Hand
{
public:
    Hand() {m_Cards.reserve(3);}

    void Add(Card *pCard)
    {
        m_Cards.push_back(pCard);
    }
    void Clear()
    {

        for (auto it = m_Cards.begin(); it != m_Cards.end(); ++it) {
            delete *it;
            //*it = 0;
        }
        m_Cards.clear();
    }
    int GetValue() const
    {
        int sumVal=0;

        if (m_Cards.size() == 0)
            return 0;
        for (auto it = m_Cards.begin(); it != m_Cards.end(); ++it)
        {
           if (((*it)->getValue()==ace)&&(m_Cards.size()>1)) sumVal+=11;
           else sumVal+=(*it)->getValue();
        }
       return sumVal;
    }
    ~Hand(){Clear();}
protected:
    std::vector <Card*> m_Cards;
};

#endif // HAND_H
