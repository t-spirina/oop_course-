#ifndef EX_H
#define EX_H

class Ex
{
public:
    Ex(double val=0);
    double getEx() const;
protected:
    double m_x;
};


class Bar
{
public:
    Bar();
    void set(double a);
protected:
    double m_y;
};


#endif // EX_H
