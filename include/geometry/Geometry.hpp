#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

#include <vector>
#include "Ray.hpp"
#include "RaySegment.hpp"
#include "Point.hpp"

using namespace std;

class Geometry {
    public:
        virtual Point getNormal(void);
        virtual Point getIntersection(Ray);

};

#endif