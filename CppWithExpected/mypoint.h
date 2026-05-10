#ifndef MYPOINT_H
#define MYPOINT_H

#include <expected>
#include <string>
constexpr int X_MIN = -3 ;
constexpr int Y_MIN = -3 ;
constexpr int Z_MIN = -3 ;
constexpr int X_MAX = 3 ;
constexpr int Y_MAX = 3 ;
constexpr int Z_MAX = 3 ;

enum class MyError
{
    Success,
    Error,
};


class MyPoint
{
    public:
        static std::expected<MyPoint, std::string> newPoint (int x=0, int y=0, int z=0) ;

        int x() ;
        int y() ;
        int z() ;

        MyError addX (int x) ;
        MyError addY (int y) ;
        MyError addZ (int z) ;

        MyError add (int x, int y, int z) ;

    private:
        MyPoint(int x, int y, int z);
        int m_x, m_y, m_z ;
};

#endif // MYPOINT_H
