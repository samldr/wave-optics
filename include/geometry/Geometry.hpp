#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

#include <vector>
#include "Ray.hpp"
#include "RaySegment.hpp"

using namespace std;

class Geometry {

    virtual vector<double> getNormal(void);
    virtual vector<double> getIntersection(Ray);

};

#endif