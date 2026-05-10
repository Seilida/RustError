#include "mypoint.h"
#include <stdexcept>

MyPoint::MyPoint(int x, int y, int z)
{
    m_x = x ;
    m_y = y ;
    m_z = z ;
}

MyPoint MyPoint::newPoint(int x, int y, int z)
{
    if (x<X_MIN || x>X_MAX) throw std::logic_error("Invalid X value") ;
    if (y<Y_MIN || y>Y_MAX) throw std::logic_error("Invalid Y value") ;
    if (z<Z_MIN || z>Z_MAX) throw std::logic_error("Invalid Z value") ;

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

void MyPoint::addX(int x)
{
    if (m_x+x<X_MIN || m_x+x>X_MAX) throw std::logic_error("Invalid X update") ;

    m_x += x ;
}

void MyPoint::addY(int y)
{
    if (m_y+y<Y_MIN || m_y+y>Y_MAX) throw std::logic_error("Invalid Y update") ;

    m_y += y ;
}

void MyPoint::addZ(int z)
{
    if (m_z+z<Z_MIN || m_z+z>Z_MAX) throw std::logic_error("Invalid Z update") ;

    m_z += z ;
}

void MyPoint::add(int x, int y, int z)
{
    this->addX(x) ;
    this->addY(y) ;
    this->addZ(z) ;
}
