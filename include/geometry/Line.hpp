#ifndef LINE_HPP
#define LINE_HPP

#include <vector>
#include <cmath>

#include "Geometry.hpp"
#include "Ray.hpp"
#include "Point.hpp"

using namespace std;

class Line : public Geometry {
    public:
        Point normal_;
        Point p1_;
        Point p2_; // { {x1, y1}, {x2, y2} }
    
        Line(Point, Point);
        Point getNormal(void);
        Point getIntersection(Ray);

};

#endif