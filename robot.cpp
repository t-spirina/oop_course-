#include "robot.h"

Robot::Robot(): m_x(0),m_y(0),m_direction(1)
{

}
void Robot::play()
{
    while (static_cast<Robot::motion>(m_direction)!=EXIT)
    {
        clearScreen();
        plotTheField();
        plotMenu();
        m_direction=getDirection();
        makeMove();
    }
}
void Robot::makeMove()
{
    switch (static_cast<Robot::motion>(m_direction)) {
    case UP:
        m_y--;
        break;
    case DOWN:
        m_y++;
        break;
    case LEFT:
        m_x--;
        break;
    case RIGTH:
        m_x++;
        break;
    case EXIT:
        ;
        break;
    default:
        throw  IllegalCommand(m_x,m_y,m_direction);
        break;
    }

    if (checkX()||(checkY()))
        throw OffTheField(m_x,m_y,dir[static_cast<Robot::motion>(m_direction)-1]);

}
int16_t Robot::getDirection()const
{
    int d;
    std::cin>>d;
    return d;
}

bool Robot::checkX()
{
    return ((m_x>=xMAX)||(m_x<xMIN));
}
bool Robot::checkY()
{
    return ((m_y>=yMAX)||(m_y<yMIN));
}
void Robot::plotMenu()
{
    std::cout<<UP<<" - вверх\n";
    std::cout<<DOWN<<" - вниз\n";
    std::cout<<LEFT<<" - влево\n";
    std::cout<<RIGTH<<" - вправо\n";
    std::cout<<EXIT<<" - завершить"<<std::endl;
}
void Robot::clearScreen()
{
     std::cout << "\x1B[2J\x1B[H";
}
void Robot::plotTheField()
{

    std::cout<<"    ";
    for(auto i=0;i<xMAX;i++)
       std::cout<<i<<" ";
    std::cout<<std::endl;
    for(auto i=0;i<xMAX;i++)
    {
        std::cout<<i<<"  |";
        for (auto j=0;j<yMAX;j++)
        {
            if ((m_x==j)&&(m_y==i)) std::cout<<"*|";
            else std::cout<<" |";
        }
        std::cout<<std::endl<<"    ";
        for (auto j=0;j<yMAX;j++)
        {
           std::cout<<"--";
        }
        std::cout<<std::endl;
    }
}
