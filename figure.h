#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
/*Создать абстрактный класс Figure (фигура). Его наследниками являются классы Parallelogram
(параллелограмм) и Circle (круг). Класс Parallelogram — базовый для классов Rectangle
(прямоугольник), Square (квадрат), Rhombus (ромб). Для всех классов создать конструкторы.
Для класса Figure добавить чисто виртуальную функцию area() (площадь). Во всех остальных
классах переопределить эту функцию, исходя из геометрических формул нахождения
площади.*/
class Figure
{
public:
    Figure(){}
    virtual double area()=0;
};
class Parallelogram : public Figure
{
   public:
    Parallelogram(double a=0, double h=0)
        : m_a(a),
          m_h(h){}
    //здесь можно добавить ввод размера второй стороны,
    //но по условию должен быть только метод вычисления площади
    //тк площадь в случае параллелограмма - произведение высоты на основание
    //то ввод второй стороны может запутать и лучше сдеть геттер в случае, если
    //рамер второй стороны все же понадобится
    double area()
    {
        return (m_a*m_h);
    }
   protected:
    double m_a;
    double m_h;

};
class Circle : public  Figure
{
public:
    Circle (double r=0)
        : m_r(r) {}
    double area()
    {
        return m_PI*m_r*m_r;
    }
   protected:
    double m_r;
    double const m_PI= 3.14;

};
class Rectangle : public Parallelogram
{
public:
    Rectangle(double a=0, double b=0)
        :Parallelogram(a,b),
          m_a(a),
          m_b(b) {}
protected:
    double m_a;
    double m_b;

};
class Square : public Parallelogram
{
public:
    Square(double a=0)
        :Parallelogram(a,a),
          m_a(a) {}
protected:
    double m_a;
};

class Rhombus: public Parallelogram
{
public:
    Rhombus(double a=0, double h=0)
        :Parallelogram(a,h),
          m_a(a),
          m_h(h){}
protected:
    double m_a;
    double m_h;

};

#endif // FIGURE_H
