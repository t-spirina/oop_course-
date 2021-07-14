#ifndef STACK_H
#define STACK_H
#include <iostream>
/*
Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
private-массив целых чисел длиной 10;
private целочисленное значение для отслеживания длины стека;
public-метод с именем reset(),
                    который будет сбрасывать длину и все значения элементов на 0;
public-метод с именем push(),
                    который будет добавлять значение в стек.
                    push() должен возвращать значение false, если массив уже заполнен,
                    и true в противном случае;
public-метод с именем pop()
                    для вытягивания и возврата значения из стека.
                    Если в стеке нет значений, то должно выводиться предупреждение;
public-метод с именем print(),
                    который будет выводить все значения стека.
*/
class stack
{
public:
    stack() :
        data{0},
        len(0)//-1)
        {};
    void reset();
    bool push(int16_t val);
    int16_t pop();
    void print();
private:
    static const int16_t maxSize = 10;
    int16_t data[maxSize];
    int16_t len;

};

#endif // STACK_H
