#include "ex_bar.h"

Ex::Ex(double val): m_x(val)
{}
double Ex::getEx() const
{
    return m_x;
}

Bar::Bar():m_y(0)
{}
void Bar::set(double a)
{
   if((m_y+a)>100)
   {
       throw Ex(a*m_y);
   }
   else m_y=a;
}
