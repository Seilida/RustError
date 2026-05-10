#include "mypoint.h"

MyPoint::MyPoint(int x, int y, int z)
{
    m_x = x ;
    m_y = y ;
    m_z = z ;
}

std::expected<MyPoint, std::string> MyPoint::newPoint(int x, int y, int z)
{
    if (x<X_MIN || x>X_MAX) return std::unexpected("Invalid X value") ;
    if (y<Y_MIN || y>Y_MAX) return std::unexpected("Invalid Y value") ;
    if (z<Z_MIN || z>Z_MAX) return std::unexpected("Invalid Z value") ;

    return MyPoint(x, y, z) ;
}

int MyPoint::x()
{
    return m_x ;
}

int MyPoint::y()
{
    return m_y ;
}

int MyPoint::z()
{
    return m_z ;
}

MyError MyPoint::addX(int x)
{
    if (m_x+x<X_MIN || m_x+x>X_MAX) return MyError::Error ;

    m_x += x ;
    return MyError::Success ;
}

MyError MyPoint::addY(int y)
{
    if (m_y+y<Y_MIN || m_y+y>Y_MAX) return MyError::Error ;

    m_y += y ;
    return MyError::Success ;
}

MyError MyPoint::addZ(int z)
{
    if (m_z+z<Z_MIN || m_z+z>Z_MAX) return MyError::Error ;

    m_z += z ;
    return MyError::Success ;
}

MyError MyPoint::add(int x, int y, int z)
{
    if (this->addX(x)!=MyError::Success)
        return MyError::Error ;
    if (this->addY(y)!=MyError::Success)
        return MyError::Error ; ;
    if (this->addZ(z)!=MyError::Success)
        return MyError::Error ; ;

    return MyError::Success ;
}
