#include <iostream>
#include "mypoint.h"


int main()
{
    MyPoint myPt = MyPoint::newPoint(0, 1, 2).value() ;
    // MyPoint myPt = MyPoint::newPoint(0, 3, 2).value() ;

    std::cout << "Initial value of myPt : " << myPt.x() << ", " << myPt.y() << ", " << myPt.z() << "\n" ;

    if (myPt.add (1, 1, 1)==MyError::Error)
        std::cout << "Altered value for myPt : " << myPt.x() << ", " << myPt.y() << ", " << myPt.z() << "\n" ;
    else
        std::cout << "Modified value of myPt : " << myPt.x() << ", " << myPt.y() << ", " << myPt.z() << "\n" ;
}
