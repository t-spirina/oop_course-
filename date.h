#ifndef DATE_H
#define DATE_H
#include <iostream>


class Date
{
public:
    Date(std::uint16_t day=0, std::uint16_t month=0, std::uint16_t year =0);
    std::uint16_t getDay() const;
    std::uint16_t getMonth() const;
    std::uint16_t getYear() const;
    void setDay( std::uint16_t day);
    void setMonth( std::uint16_t month);
    void setYear( std::uint16_t year);
    friend std::ostream& operator<<(std::ostream &os, const Date &date);
private:
    std::uint16_t mDay;
    std::uint16_t mMonth;
    std::uint16_t mYear;
};

#endif // DATE_H
