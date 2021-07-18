#ifndef FRUITS_H
#define FRUITS_H
#include <iostream>
/*
Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт). У
Fruit есть две переменные-члена: name (имя) и color (цвет). Добавить новый класс
GrannySmith, который наследует класс Apple.

Apple a("red");
Banana b;
GrannySmith c;
std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
My apple is red.
My banana is yellow.
My Granny Smith apple is green.
*/
class Fruit
{
public:
    Fruit(std::string name,std::string color)
        : m_name(name),
          m_color(color){}
    void setName(std::string name)
            { m_name = name; }
    void setColor(std::string color)
            { m_color = color; }
    std::string getName()
            { return m_name; }
    std::string getColor()
            { return  m_color; }
protected:
    std::string m_name;
    std::string m_color;
};

class Apple : public Fruit
{
public:
    Apple(std::string color)
        : Fruit("apple", color){}
};

class Banana : public Fruit
{
public:
    Banana()
        : Fruit("banana","yellow") {}
};

class GrannySmith : public Apple
{
public:
    GrannySmith()
        : Apple("green") { setName("Granny Smith apple");}
};

#endif // FRUITS_H
