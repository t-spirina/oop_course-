#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include "exeption.h"

class Robot
{
public:
    Robot();
    void play();

protected:
    enum motion{UP=1,DOWN,LEFT,RIGTH, EXIT};
    const char dir[4][15]={{"\"Вверх\""},{"\"Влево\""},{"\"Вправо\""},{"\"Вниз\""}};
    int16_t m_x;
    int16_t m_y;
    int16_t m_direction;
    static const auto  xMAX = 10;
    static const auto  yMAX = 10;
    static const auto  xMIN = 0;
    static const auto  yMIN = 0;
    void plotTheField();
    void clearScreen();
    void plotMenu();
    int16_t getDirection() const;
    void makeMove();
    bool checkX();
    bool checkY();
};

#endif // ROBOT_H
