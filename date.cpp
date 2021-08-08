#include "date.h"

Date::Date(uint16_t day, uint16_t month, uint16_t year)
    :mDay(day),
      mMonth(month),
      mYear(year){}

std::uint16_t Date::getDay() const
{
    return mDay;
}
std::uint16_t Date::getMonth() const
{
    return mMonth;
}
std::uint16_t Date::getYear() const
{
    return mYear;
}
void Date::setDay( std::uint16_t day)
{
    mDay = day;
}

void Date::setMonth( std::uint16_t month)
{
    mMonth = month;
}

void Date::setYear( std::uint16_t year)
{
    mYear = year;
}

std::ostream& operator<<(std::ostream &os, const Date &date)
{
    os<<date.mYear<<"."<<""<<date.mMonth<<"."<<date.mDay<<std::endl;
    return os;
}
