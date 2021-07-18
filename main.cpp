#include <iostream>
#include <vector>
#include "student.h"
#include "fruits.h"
int Student::count = 0;
int main()
{
    //-------------------------------------------- задание 1 -------------------
    std::vector<Student> Svec;
    Student F("first",20,MALE,60,1),
            S("second",20,FEMALE,50,1),
            T("Third",21,FEMALE,50,2);
    Student::getSudentsCout(); //первый способ вывести количество студентов
    F.printInfo();
    //---------------------------------------------------------------
    Svec.push_back(F);
    Svec.push_back(S);
    Svec.push_back(T);
    //второй способ вывести количество студентов
    std::cout<<"Количество студентов: "<<Svec.size()<<std::endl;
    Svec[1].printInfo();

    //-------------------------------------------- задание 2 -------------------

    std::cout<<std::endl;
    Apple a("red");
    Banana b;
    GrannySmith c;
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}
