#ifndef PERSON_H
#define PERSON_H
#include <iostream>
/*
Создать класс Person (человек) с полями: имя, возраст, пол и вес. Определить методы
переназначения имени, изменения возраста и веса.
Создать производный класс Student (студент), имеющий поле года обучения.
Определить методы переназначения и увеличения этого значения.
Создать счетчик количества созданных студентов.
В функции main() создать несколько студентов. По запросу вывести определенного человека.
*/
enum Gender {MALE, FEMALE};
class Person
{
public:
    Person(std::string name="", uint16_t age = 0, Gender gender= MALE, uint16_t weight =0)
        : m_name(name),
          m_age(age),
          m_gender(gender),
          m_weight(weight) {}

    void setName(std::string newName)
    {
        m_name=newName;
    }
    void setAge(uint16_t newAge)
    {
        m_age=newAge;
    }
    void setWeight(uint16_t newWeight)
    {
        m_weight=newWeight;
    }
protected:
    std::string m_name;
    uint16_t m_age;
    Gender m_gender;
    uint16_t m_weight;

};

#endif // PERSON_H
