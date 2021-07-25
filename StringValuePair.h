#ifndef STRINGVALUEPAIR_H
#define STRINGVALUEPAIR_H
#include<iostream>
#include "pair2.h"
/*
 Написать шаблон класса StringValuePair, в котором первое значение всегда типа string,
 а второе — любого типа.
 Этот шаблон класса должен наследовать частично специализированный класс Pair,
 в котором первый параметр — string, а второй — любого типа данных.
*/
template <class T>
class StringValuePair: public Pair<std::string, T>
{
public:
    StringValuePair(std::string first, T second): Pair<std::string , T >(first,second){}
};
#endif // STRINGVALUEPAIR_H
