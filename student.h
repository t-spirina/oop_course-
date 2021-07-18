#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
/*
Создать производный класс Student (студент), имеющий поле года обучения.
Определить методы переназначения и увеличения этого значения.
Создать счетчик количества созданных студентов.
*/
class Student : public Person
{
private:
    uint16_t m_yearOfStudy; //год обучения
    static int count; //счетчик созданного количества студентов
public:
    Student(std::string name="", uint16_t age = 0, Gender gender= MALE, uint16_t weight =0,uint16_t yearOfStudy=0)
        :Person(name,age,gender,weight),
        m_yearOfStudy(yearOfStudy)
    {
        count++;
    }

    void reSetYearOfStudy(uint16_t yearOfStudy)
    {
        m_yearOfStudy=yearOfStudy;
    }

    void AddToYearOfStudy (uint16_t add)
    {
        m_yearOfStudy+=add;
    }

    void printInfo()
    {
        std::cout<<"Name  : "<<m_name<<std::endl;
        std::cout<<"Age   : "<<m_age<<std::endl;
        std::cout<<"Gender: ";
        if(m_gender==MALE)
            std::cout<<"male"<<std::endl;
        else
            std::cout<<"female"<<std::endl;
        std::cout<<"Weight: "<<m_weight<<std::endl;
        std::cout<<"Year of study: "<<m_yearOfStudy<<std::endl;
    }

    static void getSudentsCout()
        {std::cout<<"Students count: "<<count<<std::endl;}
    ~Student(){count--;}

};

#endif // STUDENT_H
