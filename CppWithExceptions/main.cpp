#include <iostream>
#include <stdexcept>
#include "mypoint.h"


int main()
{
    MyPoint myPt = MyPoint::newPoint(0, 1, 2) ;
    // MyPoint myPt = MyPoint::newPoint(0, 3, 2) ;

    std::cout << "Initial value of myPt : " << myPt.x() << ", " << myPt.y() << ", " << myPt.z() << "\n" ;

    try
    {
        myPt.add (1, 1, 1) ;
    }
    catch (std::logic_error e)
    {
        std::cout << "Error : " << e.what() << "\n" ;
    }

    std::cout << "Modified value of myPt : " << myPt.x() << ", " << myPt.y() << ", " << myPt.z() << "\n" ;
}
