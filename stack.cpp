#include "stack.h"


bool stack::push(int16_t val)
{
   if(len<(maxSize))
   {

       data[len] = val;
       len++;
       return true;
    }
    else
    {
        std::cout<<"Stack overflow"<<std::endl;
        return false;
    }
}

int16_t stack::pop()
{
    int16_t tmp=0;
    if(len != 0)
    {
        len--;
        tmp = data[len];
        data[len] = 0;
        return tmp;
    }
    else {
        std::cout<<"Stack is empty"<<std::endl;
        return -1;
    }
}

void stack::reset()
{
    if(len != 0)
    {
        for(int i = 0; i < maxSize; i++)
            data[i] = 0;
        len = 0;
    }
}
void stack::print()
{
    std::cout<<"(";
    if(len > 0)
    {
        for(int i=len-1;i>-1;i--)
            std::cout<<data[i]<<" ";
    }
     std::cout<<")"<<std::endl;
}

