#include <iostream>
#include "figure.h"
#include "car.h"
#include "fraction.h"
#include "card.h"
int main()
{
    /*Создать абстрактный класс Figure (фигура). Его наследниками являются классы Parallelogram
    (параллелограмм) и Circle (круг). Класс Parallelogram — базовый для классов Rectangle
    (прямоугольник), Square (квадрат), Rhombus (ромб). Для всех классов создать конструкторы.
    Для класса Figure добавить чисто виртуальную функцию area() (площадь). Во всех остальных
    классах переопределить эту функцию, исходя из геометрических формул нахождения
    площади.*/
    Rectangle rct(10,0.2);
    Rhombus rhmb(10,5);
    Square sqr(5);
    Parallelogram prl(2,1);
    Circle crl(3);
    std::cout <<"Rectangle(10,0.2) area="<< rct.area() << std::endl;
    std::cout <<"Rhombus(10,5) area="<< rhmb.area() << std::endl;
    std::cout <<"Square(5) area="<< sqr.area() << std::endl;
    std::cout <<"Parallelogram(2,1) area="<< prl.area() << std::endl;
    std::cout <<"Circle(3) area="<< crl.area() << std::endl;
    std::cout <<"--------------------------"<< std::endl <<std::endl;
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

    Minivan("model", "comp");

    std::cout <<"--------------------------"<< std::endl <<std::endl;
    fraction f1(4,0), f2(1,2);
    (f1+f2).print();
    (f1-f2).print();
    (f1/f2).print();
    (f1*f2).print();
    (-f1).print();
    if(f1==f2) std::cout<<"equal"<<std::endl;
    if (f1!=f2) std::cout<<"not equal"<<std::endl;
    if(f1>f2) std::cout<<"f1>f2"<<std::endl;
    if(f1<f2) std::cout<<"f1<f2"<<std::endl;
    if(f1>=f2) std::cout<<"f1>=f2"<<std::endl;
    if(f1<=f2) std::cout<<"f1<=f2"<<std::endl;
     std::cout <<"--------------------------"<< std::endl <<std::endl;
     Card card(heart,ten);
     card.getValue();
    return 0;
}
