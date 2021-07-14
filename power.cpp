#include "power.h"

void power::set(int16_t num, int16_t pow)
{
    a=num;
    pwr=pow;
    return;
}
 int32_t power::calculate()
 {
     return pow(a,pwr);
 }
