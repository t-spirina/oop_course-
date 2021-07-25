#ifndef CAR_H
#define CAR_H
#include <iostream>
/*
Создать класс Car (автомобиль) с полями company (компания) и model (модель).
Классы-наследники: PassengerCar (легковой автомобиль) и Bus (автобус). От этих классов
наследует класс Minivan (минивэн). Создать конструкторы для каждого из классов, чтобы они
выводили данные о классах. Создать объекты для каждого из классов и посмотреть, в какой
последовательности выполняются конструкторы. Обратить внимание на проблему «алмаз
смерти».
Примечание: если использовать виртуальный базовый класс, то объект самого "верхнего"
базового класса создает самый "дочерний" класс.
*/
class car
{
public:
     car(std::string model, std::string company)
        : m_model(model),
          m_company(company){
        std::cout<<"car: "<<m_model<<" "<<m_company<<std::endl;
    }
protected:
    std::string m_model;
    std::string m_company;

};
class PassengerCar: public virtual car
{
public:
    PassengerCar (std::string model, std::string company)
        : car(model, company),
          m_model(model),
          m_company(company)
    { std::cout<<"  Passenger car "<<m_model<<" "<<m_company<<std::endl;}
protected:
    std::string m_model;
    std::string m_company;
};

class Bus: public virtual car
{
public:
    Bus (std::string model, std::string company)
        : car(model, company),
          m_model(model),
          m_company(company)
    { std::cout<<"  BUS "<<m_model<<" "<<m_company<<std::endl;}
protected:
    std::string m_model;
    std::string m_company;
};
class Minivan : public PassengerCar, public Bus
{
public:
    Minivan(std::string model, std::string company)
            : car(model,company), PassengerCar(model,company), Bus(model,company),
              m_model(model),
              m_company(company)
        { std::cout<<"   Minivan "<<m_model<<" "<<m_company<<std::endl;}
    protected:
        std::string m_model;
        std::string m_company;

};
#endif // CAR_H
