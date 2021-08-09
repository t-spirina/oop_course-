#ifndef EXEPTION_H
#define EXEPTION_H

#include <string.h>
#include <iostream>

class Exception
{
    protected:
        std::string text;
    public:
        virtual std::string getExeption() = 0;
};


class OffTheField:public Exception
{
public:
    OffTheField()
    {
        text = "Робот вышел за границы поля!";
    }
    OffTheField(int16_t &x, int16_t &y, const char* direction)
    {
        text = "Робот вышел за границы поля!\n"
             "Текушие координаты: [" + std::to_string(x)+", "+ std::to_string(y)+"] \n"
             "Было задано направление: "+direction+"\n";
    }
    std::string getExeption() { return text; }
};

class IllegalCommand:public Exception
{
public:
    IllegalCommand()
    {
        text = "Ошибка направления!";
    }
    IllegalCommand(int16_t &x, int16_t &y, int16_t  direction)
    {
        text = "Ошибка направления!\nТекушие координаты: [" + std::to_string(x)+", "+ std::to_string(y)+"]"
             "направление: "+std::to_string(direction)+"\n";
    }
    std::string getExeption() { return text; }
};
#endif // EXEPTION_H
