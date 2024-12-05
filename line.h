#ifndef LINE_H
#define LINE_H

#include "point.h"
#include <cmath>

using namespace std;

class Line
{
private:
    
    Point a;
    Point b;

public:
    
    Line(Point a, Point b);
    Line(const Line &other);

    bool equals(const Line &other);
    
    void flip();
    void move(double x, double y);

    string toString();
};

#endif