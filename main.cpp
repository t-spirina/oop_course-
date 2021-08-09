#include <iostream>
#include "robot.h"

int main()
{
    Robot r;
    try{
        r.play();
    }catch (Exception &ex )
        {
            std::cout<<ex.getExeption();
        }
    return 0;
}
