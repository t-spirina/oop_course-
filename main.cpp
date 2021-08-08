#include <iostream>
#include <memory>
#include "date.h"


std::unique_ptr<Date>& GetLatestDate(std::unique_ptr<Date>& d1, std::unique_ptr<Date>& d2)
{
    if ((d1)&&(d2))
    {
        if (d1->getYear()>d2->getYear())
        {
            return d1;
        }
        else if (d1->getYear()<d2->getYear()) {
            return d2;
        }
        else{
            if (d1->getMonth()>d2->getMonth())
            {
                return d1;
            }
            else if (d1->getMonth()<d2->getMonth()) {
                return d2;
            }
            else
            {
                if (d1->getDay()>d2->getDay())
                {
                    return d1;
                }
            }
        }
    }
    return d2;
}

void swapDate(std::unique_ptr<Date>& d1, std::unique_ptr<Date>& d2)
{
    d1.swap(d2);
}

int main()
{
   Date d(10,11,2011);
   std::cout<<d;

   std::unique_ptr<Date> pToday = std::make_unique <Date>(0,0,0);
   std::unique_ptr<Date> pDate = std::make_unique <Date>(0,0,0);
   pToday->setDay(6);
   pToday->setMonth(8);
   pToday->setYear(2021);
   if(pToday)
       std::cout<<*pToday;
   pDate=std::move(pToday);
   std::cout << "pointer Today " << (static_cast<bool>(pToday) ? "not null\n" : "null\n");
   std::cout << "pointer Date " << (static_cast<bool>(pDate) ? "not null\n" : "null\n");
   std::unique_ptr<Date> pD1 = std::make_unique <Date>(2,2,2020);
   std::unique_ptr<Date> pD2 = std::make_unique <Date>(1,2,2020);
   std::cout<<"latest date: "<<*GetLatestDate(pD1, pD2);
   std::cout<<"date1: "<<*pD1;
   std::cout<<"date2: "<<*pD2;
   swapDate(pD1, pD2);
   std::cout<<"after swap\ndate1: "<<*pD1;
   std::cout<<"date2: "<<*pD2;

   return 0;
}
