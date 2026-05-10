#ifndef MYPOINT_H
#define MYPOINT_H

// #include <expected>
// #include <string>

constexpr int X_MIN = -3 ;
constexpr int Y_MIN = -3 ;
constexpr int Z_MIN = -3 ;
constexpr int X_MAX = 3 ;
constexpr int Y_MAX = 3 ;
constexpr int Z_MAX = 3 ;

// enum class Status
// {
//     Success,
//     Error,
// };

class MyPoint
{
    public:
        static MyPoint newPoint (int x=0, int y=0, int z=0) ;

        int x() ;
        int y() ;
        int z() ;

        void addX (int x) ;
        void addY (int y) ;
        void addZ (int z) ;

        void add (int x, int y, int z) ;

    private:
        MyPoint(int x, int y, int z);
        int m_x, m_y, m_z ;
};

#endif // MYPOINT_H
